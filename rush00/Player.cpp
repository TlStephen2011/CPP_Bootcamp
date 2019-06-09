/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <egenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:12:10 by egenis            #+#    #+#             */
/*   Updated: 2019/06/08 16:05:32 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Player.hpp"
#include "Game.hpp"
#include <ncurses.h>
#include <fstream>
Player::Player() {

    for (int i = 0; i < MAX_PROJECTILES; i++) {
        this->isProjectileActive[i] = false;
    }

    return;
}

Player::~Player() {

    // TODO: Free stuff.
    return;
}

Player::Player(int row, int col) {
    this->row = row;
    this->col = col;

    for (int i = 0; i < MAX_PROJECTILES; i++) {
        this->isProjectileActive[i] = false;
    }

    return;
}

Player& Player::operator=(Player const &rhs) {

    // TODO: Do deep copy of all given private members.
    return *this;
}

Player::Player(Player const &copy) {

    *this = copy;
}

void Player::move(int input) {

    if (input == KEY_UP && this->row > 0) {
        this->row--;
    } else if (input == KEY_DOWN && this->row < WINDOW_ROWS - 1) {
        this->row++;
    } else if (input == ' ') {
        for (int i = 0; i < MAX_PROJECTILES; i++) {
            if (!(this->isProjectileActive[i])) {
                this->projectiles[i] = new Projectile(this->row, this->col);
                this->isProjectileActive[i] = true;
                return;
            }
        }
    }
}

void Player::deleteDeadProjectiles() {
    for (int i = 0; i < MAX_PROJECTILES; i++) {
        if (this->isProjectileActive[i]) {
            if (this->projectiles[i]->getCol() >= WINDOW_COLS) {
                delete this->projectiles[i];
                this->isProjectileActive[i] = false;
            }
        } 
    }
}

Projectile** Player::getProjectiles() {
    return this->projectiles;
}

bool* Player::getAliveProjectiles() {
    return this->isProjectileActive;
}