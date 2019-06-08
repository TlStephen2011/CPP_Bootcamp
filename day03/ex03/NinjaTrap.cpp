/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:16:59 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/08 16:17:10 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap()
{
    this->setHitPoints(60);
    this->setMaxHitPoints(60);
    this->setEnergyPoints(120);
    this->setMaxEnergyPoints(120);
    this->setLevel(1);
    this->setMeleeAttackDamage(60);
    this->setRangedAttackDamage(5);
    this->setArmorDamageReduction(0);
    std::cout << "NinjaTrap constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
    this->setHitPoints(60);
    this->setMaxHitPoints(60);
    this->setEnergyPoints(120);
    this->setMaxEnergyPoints(120);
    this->setLevel(1);
    this->setMeleeAttackDamage(60);
    this->setRangedAttackDamage(5);
    this->setArmorDamageReduction(0);
    std::cout << "NinjaTrap name constructor called" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "NinjaTrap destructing " << this->getName() << std::endl; 
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const &rhs)
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

void NinjaTrap::rangedAttack(std::string const &target) const
{
    std::cout << "NinjaTrap <" << this->getName() << "> attacks <" \
    << target << "> at range, causing " << this->getRangedAttackDamage() << \
	" points of damage !" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const &target) const
{
    std::cout << "NinjaTrap <" << this->getName() << "> attacks <" \
    << target << "> in melee range, causing " << this->getMeleeAttackDamage() << \
    " points of damage !" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy)
{
    *this = copy;
}

void NinjaTrap::ninjaShoebox(ClapTrap &someTrap)
{
    std::cout << this->getName() << " is CLAPping " << \
    someTrap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &someTrap)
{
    std::cout << this->getName() << " is FRAGging " << \
    someTrap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &someTrap)
{
    std::cout << this->getName() << " is S'h'AVing, f*** it SCAVing " << \
    someTrap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &someTrap)
{
    std::cout << this->getName() << " is doing some random Ninja shit on " << \
    someTrap.getName() << std::endl;
}