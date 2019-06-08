/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:41:16 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/08 16:31:37 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap() :
    _hitPoints(0),
    _maxHitPoints(0),
    _energyPoints(0),
    _maxEnergyPoints(0),
    _level(0),
    _name(std::string("Default")),
    _meleeAttackDamage(0),
    _rangedAttackDamage(0),
    _armorDamageReduction(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}


ClapTrap::ClapTrap(std::string name) :
    _hitPoints(0),
    _maxHitPoints(0),
    _energyPoints(0),
    _maxEnergyPoints(0),
    _level(0),
    _name(name),
    _meleeAttackDamage(0),
    _rangedAttackDamage(0),
    _armorDamageReduction(0)
{
    std::cout << "ClapTrap Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructing " << this->_name << std::endl;
	return;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs)
{
    this->_hitPoints = rhs.getHitPoints();
    this->_maxHitPoints = rhs.getMaxHitPoints();
    this->_energyPoints = rhs.getEnergyPoints();
    this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
    this->_level = rhs.getLevel();
    this->_name = rhs.getName();
    this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
    this->_rangedAttackDamage = rhs.getRangedAttackDamage();
    this->_armorDamageReduction = rhs.getArmorDamageReduction();
    
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
}

unsigned int ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_armorDamageReduction >= amount)
    {
        std::cout << this->_name <<  " took 0 damage." << std::endl;
        return 0;
    }

    int damage = amount - this->_armorDamageReduction;

    if (static_cast<int>(this->_hitPoints) - damage >= 0)
    {
        this->_hitPoints -= damage;
        std::cout << this->_name << " took " << damage << " damage." << std::endl;
        return damage;
    }
    else
    {
        std::cout << this->_name << " died. Took " << this->_hitPoints << " damage." << std::endl;
        this->_hitPoints = 0;
        return this->_hitPoints;
    }
}

unsigned int ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints + amount > this->_maxHitPoints)
    {
        std::cout << this->_name << " repairing " << \
        this->_maxHitPoints - this->_hitPoints << \
		" hit points" << std::endl;

        this->_hitPoints = this->_maxHitPoints;
        return this->_maxHitPoints - this->_hitPoints;
    }
    else
    {
        std::cout << this->_name << " repairing " << \
        amount << " hit points" << std::endl;

        this->_hitPoints += amount;
        return amount;
    }
}

//Getters

unsigned int ClapTrap::getHitPoints() const
{
    return this->_hitPoints;
}

unsigned int ClapTrap::getMaxHitPoints() const
{
    return this->_maxHitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

unsigned int ClapTrap::getMaxEnergyPoints() const
{
    return this->_maxEnergyPoints;
}

unsigned int ClapTrap::getLevel() const
{
    return this->_level;
}

std::string ClapTrap::getName() const
{
    return this->_name;
}

unsigned int ClapTrap::getMeleeAttackDamage() const
{
    return this->_meleeAttackDamage;
}

unsigned int ClapTrap::getRangedAttackDamage() const
{
    return this->_rangedAttackDamage;
}

unsigned int ClapTrap::getArmorDamageReduction() const
{
    return this->_armorDamageReduction;
}

//Setters

void ClapTrap::setHitPoints(unsigned int amount)
{
    this->_hitPoints = amount;
}

void ClapTrap::setMaxHitPoints(unsigned int amount)
{
    this->_maxHitPoints = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount)
{
    this->_energyPoints = amount;
}

void ClapTrap::setMaxEnergyPoints(unsigned int amount)
{
    this->_maxEnergyPoints = amount;
}

void ClapTrap::setLevel(unsigned int amount)
{
    this->_level = amount;
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::setMeleeAttackDamage(unsigned int amount)
{
    this->_meleeAttackDamage = amount;
}

void ClapTrap::setRangedAttackDamage(unsigned int amount)
{
    this->_rangedAttackDamage = amount;
}

void ClapTrap::setArmorDamageReduction(unsigned int amount)
{
    this->_armorDamageReduction = amount;
}