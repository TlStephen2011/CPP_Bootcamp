/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 21:14:34 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/08 21:14:34 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Projectile.hpp"
#include <curses.h>
#include "Player.hpp"

Projectile::Projectile() {
    return;
}

Projectile::~Projectile() {
    return;
}

Projectile::Projectile(int row, int col) {
    this->row = row;
    this->col = col + 1;
    return;
}

Projectile& Projectile::operator=(Projectile const& rhs) {
    //TODO: complete copy
    return *this;
}

Projectile::Projectile(Projectile const& copy) {
    *this = copy;
}

void Projectile::move() {
    this->col++;
}