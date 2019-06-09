/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <egenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:21:20 by egenis            #+#    #+#             */
/*   Updated: 2019/06/08 15:17:12 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ncurses.h>
#include "Game.hpp"
#include "Enemy.hpp"

// TODO: Enemies should not spawn on same point.
Enemy::Enemy() {

    int randRow = rand() % WINDOW_ROWS;
    this->row = randRow;
    this->col = WINDOW_COLS - 1;

    return;
}

Enemy::Enemy(Enemy *enemies[], bool isEnemyAlive[]) {
    int randRow = rand() % WINDOW_ROWS;

    for (int i = 0; i < MAX_ENEMY; i++) {
        if (isEnemyAlive[i]) {
            if (enemies[i]->getRow() == randRow && enemies[i]->getCol() == WINDOW_COLS - 1) {
                this->row = -1;
                this->col = -1;
                return;
            }
        }
    }
    this->row = randRow;
    this->col = WINDOW_COLS - 1;
}

Enemy::~Enemy() {

    // TODO: Free stuff
    return;
}

Enemy& Enemy::operator=(Enemy const &rhs) {

    // TODO: Deep copy stuff
    return *this;
}

Enemy::Enemy(Enemy const &copy) {

    *this = copy;
}

void Enemy::move() {
    this->col--;
}
