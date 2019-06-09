/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 23:16:50 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 23:16:50 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

Character::Character()
{
    return;    
}

Character::Character(std::string const &name) : 
    _name(name),
    _apPoints(40),
    _weapon(NULL)
{
    return;
}

Character::~Character()
{
    return;
}

Character::Character(Character const &copy)
{
    //TODO: compelete copy
    (void)copy;
    return;
}

Character& Character::operator=(Character const &rhs)
{
    //TODO: complete assignment
    (void)rhs;
    return *this;
}

std::string Character::getName() const
{
    return this->_name;
}

void Character::equip(AWeapon *weapon)
{
    this->_weapon = weapon;
}

void Character::recoverAP()
{
    if (this->_apPoints + 10 >= 40)
    {
        this->_apPoints = 40;
    }
    else
    {
        this->_apPoints += 10;        
    }    
}

void Character::attack(Enemy *enemy)
{
    if (this->_weapon && enemy)
    {
        if (this->_weapon->getAPCost() <= this->_apPoints)
        {
            std::cout << this->_name << " attacks " << enemy->getType() \
            << " with a " << this->_weapon->getName() << std::endl;
            this->_weapon->attack();

            enemy->takeDamage(this->_weapon->getDamage());
            if (enemy->getHP() == 0)
            {
                delete enemy;
            }
            this->_apPoints -= this->_weapon->getAPCost();
        }
        else
        {
            std::cout << "Insufficient AP Points to attack" << std::endl;
        }
        
    }
}

int Character::getAP() const
{
    return this->_apPoints;
}

AWeapon* Character::getWeapon() const
{
    return this->_weapon;
}

std::ostream& operator<<(std::ostream &o, Character const &other)
{
    AWeapon* weapon = other.getWeapon();

    if (weapon)
    {
        o << other.getName() << " has " << other.getAP() << " AP and wields a " \
        << weapon->getName() << std::endl;
    }
    else
    {
        o << other.getName() << " has " << other.getAP() << " AP and is unarmed" << std::endl;
    }    
    return o;
}