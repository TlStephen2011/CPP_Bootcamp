/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:51:12 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/07 14:16:31 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap() :
    _hitPoints(100),
    _maxHitPoints(100),
    _energyPoints(50),
    _maxEnergyPoints(50),
    _level(1),
    _name(std::string("Default")),
    _meleeAttackDamage(20),
    _rangedAttackDamage(15),
    _armorDamageReduction(3)
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
}


ScavTrap::ScavTrap(std::string name) :
    _hitPoints(100),
    _maxHitPoints(100),
    _energyPoints(50),
    _maxEnergyPoints(50),
    _level(1),
    _name(name),
    _meleeAttackDamage(20),
    _rangedAttackDamage(15),
    _armorDamageReduction(3)
{
    std::cout << "ScavTrap Name constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructing " << this->_name << std::endl;
	return;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs)
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

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    *this = copy;
}

void ScavTrap::rangedAttack(std::string const &target) const
{
    std::cout << "ScavTrap <" << this->getName() << "> attacks <" \
    << target << "> at range, causing " << this->getRangedAttackDamage() << \
	" points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) const
{
    std::cout << "ScavTrap <" << this->getName() << "> attacks <" \
    << target << "> at range, causing " << this->getMeleeAttackDamage() << \
    " points of damage !" << std::endl;
}

unsigned int ScavTrap::takeDamage(unsigned int amount)
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

unsigned int ScavTrap::beRepaired(unsigned int amount)
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

void ScavTrap::challengeNewcomer(std::string const &target)
{
	typedef void (ScavTrap::*specialAttacks)(std::string const&) const;
	specialAttacks arr[5] = {
		&ScavTrap::barrier,
		&ScavTrap::disappear,
		&ScavTrap::caustic,
		&ScavTrap::charm,
		&ScavTrap::threaten,
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

void ScavTrap::barrier(std::string const &target) const
{
	std::cout << "puts up a fake wall to deceive " << \
	target << " from entering" << std::endl;
}

void ScavTrap::caustic(std::string const &target) const
{
	std::cout << "wall of flames activate, preventing " << \
	target << " from entering" << std::endl;
}

void ScavTrap::charm(std::string const &target) const
{
	std::cout << "deceives " << \
	target << " by making them happy" << std::endl;
}

void ScavTrap::disappear(std::string const &target) const
{
	std::cout << "removes entrance so that " << \
	target << " cannot see it" << std::endl;
}

void ScavTrap::threaten(std::string const &target) const
{
	std::cout << "passively dissuades " << \
	target << " from entering " << std::endl;
}

//Getters

unsigned int ScavTrap::getHitPoints() const
{
    return this->_hitPoints;
}

unsigned int ScavTrap::getMaxHitPoints() const
{
    return this->_maxHitPoints;
}

unsigned int ScavTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

unsigned int ScavTrap::getMaxEnergyPoints() const
{
    return this->_maxEnergyPoints;
}

unsigned int ScavTrap::getLevel() const
{
    return this->_level;
}

std::string ScavTrap::getName() const
{
    return this->_name;
}

unsigned int ScavTrap::getMeleeAttackDamage() const
{
    return this->_meleeAttackDamage;
}

unsigned int ScavTrap::getRangedAttackDamage() const
{
    return this->_rangedAttackDamage;
}

unsigned int ScavTrap::getArmorDamageReduction() const
{
    return this->_armorDamageReduction;
}

//Setters

void ScavTrap::setHitPoints(unsigned int amount)
{
    this->_hitPoints = amount;
}

void ScavTrap::setMaxHitPoints(unsigned int amount)
{
    this->_maxHitPoints = amount;
}

void ScavTrap::setEnergyPoints(unsigned int amount)
{
    this->_energyPoints = amount;
}

void ScavTrap::setMaxEnergyPoints(unsigned int amount)
{
    this->_maxEnergyPoints = amount;
}

void ScavTrap::setLevel(unsigned int amount)
{
    this->_level = amount;
}

void ScavTrap::setName(std::string name)
{
    this->_name = name;
}

void ScavTrap::setMeleeAttackDamage(unsigned int amount)
{
    this->_meleeAttackDamage = amount;
}

void ScavTrap::setRangedAttackDamage(unsigned int amount)
{
    this->_rangedAttackDamage = amount;
}

void ScavTrap::setArmorDamageReduction(unsigned int amount)
{
    this->_armorDamageReduction = amount;
}