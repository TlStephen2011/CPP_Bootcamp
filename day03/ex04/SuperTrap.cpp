/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:49:27 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/08 16:33:12 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap()
{
    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(120);
    this->setMaxEnergyPoints(120);
    this->setLevel(1);
    this->setName("Default");
    this->setMeleeAttackDamage(60);
    this->setRangedAttackDamage(20);
    this->setArmorDamageReduction(5);

    std::cout << "SuperTrap default constructor called" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(120);
    this->setMaxEnergyPoints(120);
    this->setLevel(1);
    this->setName(name);
    this->setMeleeAttackDamage(60);
    this->setRangedAttackDamage(20);
    this->setArmorDamageReduction(5);

    std::cout << "SuperTrap name constructor called" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SuperTrap destructing" << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target) const
{
    std::cout << "FragTrap(SuperTrap) <" << this->getName() << "> attacks <" \
    << target << "> at range, causing " << this->getRangedAttackDamage() << \
	" points of damage !" << std::endl;
}

void SuperTrap::meleeAttack(std::string const &target) const
{
    std::cout << "NinjaTrap(SuperTrap) <" << this->getName() << "> attacks <" \
    << target << "> in melee range, causing " << this->getMeleeAttackDamage() << \
    " points of damage !" << std::endl;
}

SuperTrap& SuperTrap::operator=(SuperTrap const& rhs)
{
    this->FragTrap::setHitPoints(rhs.FragTrap::getHitPoints());
    this->FragTrap::setMaxHitPoints(rhs.FragTrap::getMaxHitPoints());
    this->NinjaTrap::setEnergyPoints(rhs.NinjaTrap::getEnergyPoints());
    this->NinjaTrap::setMaxEnergyPoints(rhs.NinjaTrap::getMaxEnergyPoints());
    this->NinjaTrap::setLevel(1);
    this->NinjaTrap::setName(rhs.NinjaTrap::getName());
    this->NinjaTrap::setMeleeAttackDamage(rhs.NinjaTrap::getMeleeAttackDamage());
    this->FragTrap::setRangedAttackDamage(rhs.FragTrap::getRangedAttackDamage());
    this->FragTrap::setArmorDamageReduction(rhs.FragTrap::getArmorDamageReduction());
    
    return *this;
}

SuperTrap::SuperTrap(SuperTrap const &copy)
{
    *this = copy;
}