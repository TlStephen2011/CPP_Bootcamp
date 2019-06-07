/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:51:12 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/07 15:38:02 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap()
{
	this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(50);
    this->setMaxEnergyPoints(50);
    this->setLevel(1);
    this->setMeleeAttackDamage(20);
    this->setRangedAttackDamage(15);
    this->setArmorDamageReduction(3);
    std::cout << "ScavTrap Default constructor called" << std::endl;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(50);
    this->setMaxEnergyPoints(50);
    this->setLevel(1);
    this->setMeleeAttackDamage(20);
    this->setRangedAttackDamage(15);
    this->setArmorDamageReduction(3);
    std::cout << "ScavTrap Name constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructing " << this->getName() << std::endl;
	return;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs)
{
    this->setHitPoints(rhs.getHitPoints());
    this->setMaxHitPoints(rhs.getMaxHitPoints());
    this->setEnergyPoints(rhs.getEnergyPoints());
    this->setMaxEnergyPoints(rhs.getMaxEnergyPoints());
    this->setLevel(rhs.getLevel());
    this->setName(rhs.getName());
    this->setMeleeAttackDamage(rhs.getMeleeAttackDamage());
    this->setRangedAttackDamage(rhs.getRangedAttackDamage());
    this->setArmorDamageReduction(rhs.getArmorDamageReduction());
    
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    *this = copy;
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

	if (this->getEnergyPoints() < 25)
	{
		std::cout << "insufficient energy, require " << \
		25 - this->getEnergyPoints() << " more" << std::endl;
	}
	else
	{
		int random = rand() % 5;
		(this->*(arr[random]))(target);
		this->setEnergyPoints(this->getEnergyPoints() - 25);
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
