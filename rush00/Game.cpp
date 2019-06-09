/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <egenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:00:30 by egenis            #+#    #+#             */
/*   Updated: 2019/06/08 16:29:08 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <curses.h>
#include "Game.hpp"
#include "Enemy.hpp"
#include "Player.hpp"
#include <fstream>
#include <ctime>

Game::Game() {
    this->ship = new Player(15, 0);
    return;
}

Game::~Game(void) {
    
    // TODO: Free private members of Game.
    return;
}

Game& Game::operator=(Game const &rhs) {

    // TODO: Do deep copy of all given private members.
    return *this;
}

Game::Game(Game const &copy) {

    *this = copy;
}

Game::Game(WINDOW *win)
{
    this->ship = new Player(15, 0);
    this->win = win;

    for (int i = 0; i < MAX_ENEMY; i++) {
        this->isEnemyAlive[i] = false;
    }

    return;
}

void Game::setInput() {

    int ch = wgetch(this->win);
    
    switch (ch) {
        case KEY_UP:
            this->input = KEY_UP;
            break;
        case KEY_DOWN:
            this->input = KEY_DOWN;
            break;
        case ' ':
            this->input = ' ';
            break;
        default:
            this->input = 0;
            break;
     }
}

int Game::getInput() {
    return this->input;
}

bool Game::update() {

    int randomEnemySpawnCounter = rand() % 5;

    this->ship->move(this->input);
    if (randomEnemySpawnCounter == 0)
        this->spawnEnemies();

    for (int i = 0; i < MAX_ENEMY; i++) {

        if (this->isEnemyAlive[i]) {

            this->enemies[i]->move();
        }
    }

    Projectile** projectiles = this->ship->getProjectiles();
    bool* aliveProjectiles = this->ship->getAliveProjectiles();

    for (int i = 0; i < MAX_PROJECTILES; i++) {
        if (aliveProjectiles[i]) {
            projectiles[i]->move();
        }
    }

    this->deleteDeadEnemies();
    this->ship->deleteDeadProjectiles();

    if (this->hasCollided()) {
        return false;
    }

    return true;
};

void Game::render() {

    wclear(this->win);

    // DRAW PLAYER
    mvwaddch(this->win, this->ship->getRow(), this->ship->getCol(), PLAYER_CHAR);

    // DRAW ENEMIES
    for (int i = 0; i < MAX_ENEMY; i++) {
        if (this->isEnemyAlive[i]) {
            mvwaddch(this->win, this->enemies[i]->getRow(), this->enemies[i]->getCol(), ENEMY_CHAR);
        }
    }

    // DRAW PROJECTILES
    Projectile** projectiles = this->ship->getProjectiles();
    bool* aliveProjectiles = this->ship->getAliveProjectiles();


    for (int i = 0; i < MAX_PROJECTILES; i++) {
        if (aliveProjectiles[i]) {        
            mvwaddch(this->win, projectiles[i]->getRow(), projectiles[i]->getCol(), PROJECTILE_CHAR);
        }
    }

    wrefresh(this->win);
    // wclear(this->win);
}

void Game::deleteInvalidEnemies() {
    for (int i = 0; i < MAX_ENEMY; i++) {
        if (this->isEnemyAlive[i]) {
            if (this->enemies[i]->getRow() == -1 || this->enemies[i]->getCol() == -1) {
                this->isEnemyAlive[i] = false;
                delete this->enemies[i];
            }
        }
    }
}

void Game::spawnEnemies() {
    int randomEnemyNumber = rand() % 2 + 1;
    int counter = 0;
    
    for (int i = 0; i < MAX_ENEMY; i++) {
        
        if (counter > randomEnemyNumber) {
            break;
        }

        if (!(this->isEnemyAlive[i])) {
            this->enemies[i] = new Enemy(this->enemies, this->isEnemyAlive);
            this->deleteInvalidEnemies();
            this->isEnemyAlive[i] = true;
            counter++;
        }
    }
}

void Game::logInfo() {
    std::ofstream logFile;
    logFile.open("log.txt", std::ios::app);

    std::string time = this->currentDateTime();

    logFile << time << " " << std::endl;
    logFile << "Collision!!!!" << std::endl;

    // logFile << "INDEX\t" << "ALIVE\t" << "POSITION_ROW\t" << "POSITION_COL\t" << "PLAYER_ROW\t" << "PLAYER_COL" << std::endl; 
    // for (int i = 0; i < MAX_ENEMY; i++) {
    //     if (this->isEnemyAlive[i])
    //         logFile << i << "\t\t" << this->isEnemyAlive[i] << "\t\t" << this->enemies[i]->getRow() << "\t\t" << this->enemies[i]->getCol() \
    //         << this->ship->getRow() << "\t\t" << this->ship->getCol() << std::endl;
    // }

    // logFile << "PLAYER ROW: " << this->ship->getRow() << std::endl;
    // logFile << "PLAYER COL: " << this->ship->getCol() << std::endl;

    // for (int i = 0; i < MAX_ENEMY; i++) {

    //     if (this->isEnemyAlive[i]) {
            
    //         logFile << "ENEMY ROW: " << this->enemies[i]->getRow() << std::endl;
    //         logFile << "ENEMY COL: " << this->enemies[i]->getCol() << std::endl;
    //     }
    // }

    logFile.close();
}

void Game::logInfo(Projectile** projectiles, bool isProjectileAlive[]) {
    std::ofstream logFile;
    logFile.open("log.txt", std::ios::app);

    logFile << "INDEX\t" << "POSITION_ROW\t" << "POSITION_COL\t" << std::endl; 
    for (int i = 0; i < MAX_PROJECTILES; i++) {
        if (isProjectileAlive[i]) {
            logFile << i << "\t\t" << projectiles[i]->getRow() << "\t\t" << projectiles[i]->getCol() << std::endl;
        }
    }

    logFile.close();
}

const std::string Game::currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

void Game::deleteDeadEnemies() {
    for (int i = 0; i < MAX_ENEMY; i++) {
        if (this->isEnemyAlive[i]) {
            if (this->enemies[i]->getCol() < 0) {
                delete this->enemies[i];
                this->isEnemyAlive[i] = false;
            }
        }
    }

    Projectile** projectiles = this->ship->getProjectiles();
    bool* isProjectileActive = this->ship->getAliveProjectiles();

    for (int i = 0; i < MAX_PROJECTILES; i++) {
        if (isProjectileActive[i]) {
            for (int j = 0; j < MAX_ENEMY; j++) {
                if (this->isEnemyAlive[j]) {
                    if (
                        (projectiles[i]->getRow() == this->enemies[j]->getRow() &&
                        projectiles[i]->getCol() == this->enemies[j]->getCol()) ||
                        (projectiles[i]->getRow() == this->enemies[j]->getRow() &&
                        projectiles[i]->getCol() - 1 == this->enemies[j]->getCol())
                    ) {
                        delete this->enemies[j];
                        this->isEnemyAlive[j] = false;
                        delete projectiles[i];
                        isProjectileActive[i] = false;
                    }
                }
            }
        }
    }

}

bool Game::hasCollided() {

    int playerCol = this->ship->getCol();
    int playerRow = this->ship->getRow();

    for (int i = 0; i < MAX_ENEMY; i++) {

        if (this->isEnemyAlive[i]) {

            if (
                this->enemies[i]->getRow() == playerRow &&
                this->enemies[i]->getCol() == playerCol
            ) {
                return true;
            }
        }
    }

    return false;
}
