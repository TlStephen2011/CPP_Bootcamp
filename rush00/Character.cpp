/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <egenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:04:01 by egenis            #+#    #+#             */
/*   Updated: 2019/06/08 14:26:40 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Character.hpp"

Character::Character() {

    return;
}

Character::~Character() {

    // TODO: Free private members of Game.
    return;
}

Character& Character::operator=(Character const &rhs) {

    // TODO: Do deep copy of all given private members.
    return *this;
}

Character::Character(Character const &copy) {
    *this = copy;
}

Character::Character(int row, int col) {
    this->row = row;
    this->col = col;
}


int Character::getRow() {

    return this->row;
}

int Character::getCol() {

    return this->col;
}

// void Character::move() {

//     // TODO: Add move logic.
// }
