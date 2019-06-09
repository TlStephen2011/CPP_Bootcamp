/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:54:10 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 22:54:10 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <iostream>

Enemy::Enemy()
{
    return;
}

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
    return;
}

Enemy::~Enemy()
{
    return;
}

Enemy& Enemy::operator=(Enemy const &rhs)
{
    this->_hp = rhs.getHP();
    this->_type = rhs.getType(); 
    return *this;
}

Enemy::Enemy(Enemy const &copy)
{
    *this = copy;    
}

void Enemy::takeDamage(int amount)
{
    if (amount > 0)
    {
        if (this->_hp - amount <= 0)
        {
            this->_hp = 0;
        }
        else
        {
            this->_hp = this->_hp - amount;
        }
        
    }
}

int Enemy::getHP() const
{
    return this->_hp;
}

std::string Enemy::getType() const
{
    return this->_type;
}