/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:19:04 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 22:19:04 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
    return;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) :
    _name(name),
    _apcost(apcost),
    _damage(damage)
{
    return;
}

AWeapon::~AWeapon()
{
    return;
}

AWeapon& AWeapon::operator=(AWeapon const &rhs)
{
    this->_name = rhs.getName();
    this->_apcost = rhs.getAPCost();
    this->_damage = rhs.getDamage();
    return *this;
}

AWeapon::AWeapon(AWeapon const &copy)
{
    *this = copy;
}

int AWeapon::getAPCost() const
{
    return this->_apcost;
}

std::string AWeapon::getName() const
{
    return this->_name;
}

int AWeapon::getDamage() const
{
    return this->_damage;
}

