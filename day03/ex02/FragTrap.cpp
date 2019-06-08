/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:37:16 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/08 16:13:18 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap()
{
    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(100);
    this->setMaxEnergyPoints(100);
    this->setLevel(1);
    this->setMeleeAttackDamage(30);
    this->setRangedAttackDamage(20);
    this->setArmorDamageReduction(5);
    std::cout << "FragTrap Default constructor called" << std::endl;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(100);
    this->setMaxEnergyPoints(100);
    this->setLevel(1);
    this->setMeleeAttackDamage(30);
    this->setRangedAttackDamage(20);
    this->setArmorDamageReduction(5);
    std::cout << "FragTrap Name constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructing " << this->getName() << std::endl;
	return;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs)
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

FragTrap::FragTrap(const FragTrap &copy)
{
    *this = copy;
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

void FragTrap::rangedAttack(std::string const &target) const
{
    std::cout << "FragTrap <" << this->getName() << "> attacks <" \
    << target << "> at range, causing " << this->getRangedAttackDamage() << \
	" points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) const
{
    std::cout << "FragTrap <" << this->getName() << "> attacks <" \
    << target << "> in melee range, causing " << this->getMeleeAttackDamage() << \
    " points of damage !" << std::endl;
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
