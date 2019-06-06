/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:37:16 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/06 23:59:45 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap() :
    _hitPoints(100),
    _maxHitPoints(100),
    _energyPoints(100),
    _maxEnergyPoints(100),
    _level(1),
    _name(std::string("Default")),
    _meleeAttackDamage(30),
    _rangedAttackDamage(20),
    _armorDamageReduction(5)
{
    std::cout << "Default constructor called" << std::endl;
}


FragTrap::FragTrap(std::string name) :
    _hitPoints(100),
    _maxHitPoints(100),
    _energyPoints(100),
    _maxEnergyPoints(100),
    _level(1),
    _name(name),
    _meleeAttackDamage(30),
    _rangedAttackDamage(20),
    _armorDamageReduction(5)
{
    std::cout << "Name constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "destructing " << this->_name << std::endl;
	return;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs)
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

FragTrap::FragTrap(const FragTrap &copy)
{
    *this = copy;
}

void FragTrap::rangedAttack(std::string const &target) const
{
    std::cout << "FR4G-TP <" << this->getName() << "> attacks <" \
    << target << "> at range, causing " << this->getRangedAttackDamage() << \
	" points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) const
{
    std::cout << "FR4G-TP <" << this->getName() << "> attacks <" \
    << target << "> at range, causing " << this->getMeleeAttackDamage() << \
    " points of damage !" << std::endl;
}

unsigned int FragTrap::takeDamage(unsigned int amount)
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

unsigned int FragTrap::beRepaired(unsigned int amount)
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

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	typedef void (FragTrap::*specialAttacks)(std::string const&) const;
	specialAttacks arr[5] = {
		&FragTrap::deathFromBelow,
		&FragTrap::angryGrenade,
		&FragTrap::dashToFlank,
		&FragTrap::bladeWall,
		&FragTrap::hookShot,
	};

	if (this->_energyPoints < 25)
	{
		std::cout << "insufficient energy, require " << \
		25 - this->_energyPoints << " more" << std::endl;
	}
	else
	{
		//srand(time(NULL));
		int random = rand() % 5;
		(this->*(arr[random]))(target);
		this->_energyPoints -= 25;
	}
}

void FragTrap::deathFromBelow(std::string const &target) const
{
	std::cout << "dives underground to conduct a sweeping blow pulling " << \
	target << " underground" << std::endl;
}

void FragTrap::angryGrenade(std::string const &target) const
{
	std::cout << "throws a grenade at " << \
	target << " violently, high chance of rebound" << std::endl;
}

void FragTrap::dashToFlank(std::string const &target) const
{
	std::cout << "gains 3 dashes to be used to avoid " << \
	target << " attacks" << std::endl;
}

void FragTrap::bladeWall(std::string const &target) const
{
	std::cout << "puts up a wall of blades around " << \
	target << " only 1 way out" << std::endl;
}

void FragTrap::hookShot(std::string const &target) const
{
	std::cout << "lowers " << \
	target << " health and fires a grappling hook, if it hits it will pull " << \
	target << " closer"  << std::endl;
}

//Getters

unsigned int FragTrap::getHitPoints() const
{
    return this->_hitPoints;
}

unsigned int FragTrap::getMaxHitPoints() const
{
    return this->_maxHitPoints;
}

unsigned int FragTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

unsigned int FragTrap::getMaxEnergyPoints() const
{
    return this->_maxEnergyPoints;
}

unsigned int FragTrap::getLevel() const
{
    return this->_level;
}

std::string FragTrap::getName() const
{
    return this->_name;
}

unsigned int FragTrap::getMeleeAttackDamage() const
{
    return this->_meleeAttackDamage;
}

unsigned int FragTrap::getRangedAttackDamage() const
{
    return this->_rangedAttackDamage;
}

unsigned int FragTrap::getArmorDamageReduction() const
{
    return this->_armorDamageReduction;
}

//Setters

void FragTrap::setHitPoints(unsigned int amount)
{
    this->_hitPoints = amount;
}

void FragTrap::setMaxHitPoints(unsigned int amount)
{
    this->_maxHitPoints = amount;
}

void FragTrap::setEnergyPoints(unsigned int amount)
{
    this->_energyPoints = amount;
}

void FragTrap::setMaxEnergyPoints(unsigned int amount)
{
    this->_maxEnergyPoints = amount;
}

void FragTrap::setLevel(unsigned int amount)
{
    this->_level = amount;
}

void FragTrap::setName(std::string name)
{
    this->_name = name;
}

void FragTrap::setMeleeAttackDamage(unsigned int amount)
{
    this->_meleeAttackDamage = amount;
}

void FragTrap::setRangedAttackDamage(unsigned int amount)
{
    this->_rangedAttackDamage = amount;
}

void FragTrap::setArmorDamageReduction(unsigned int amount)
{
    this->_armorDamageReduction = amount;
}