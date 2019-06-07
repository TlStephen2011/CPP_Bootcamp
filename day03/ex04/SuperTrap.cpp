/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:49:27 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/07 17:35:30 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap()
{
    this->FragTrap::setHitPoints(FragTrap::getHitPoints());
    this->FragTrap::setMaxHitPoints(FragTrap::getMaxHitPoints());
    this->NinjaTrap::setEnergyPoints(NinjaTrap::getEnergyPoints());
    this->NinjaTrap::setMaxEnergyPoints(NinjaTrap::getMaxEnergyPoints());
    this->NinjaTrap::setLevel(1);
    this->NinjaTrap::setName(NinjaTrap::getName());
    this->NinjaTrap::setMeleeAttackDamage(NinjaTrap::getMeleeAttackDamage());
    this->FragTrap::setRangedAttackDamage(FragTrap::getRangedAttackDamage());
    this->FragTrap::setArmorDamageReduction(FragTrap::getArmorDamageReduction());

    std::cout << "SuperTrap default constructor called" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : NinjaTrap(name)
{
    this->FragTrap::setHitPoints(FragTrap::getHitPoints());
    this->FragTrap::setMaxHitPoints(FragTrap::getMaxHitPoints());
    this->NinjaTrap::setEnergyPoints(NinjaTrap::getEnergyPoints());
    this->NinjaTrap::setMaxEnergyPoints(NinjaTrap::getMaxEnergyPoints());
    this->NinjaTrap::setLevel(1);
    this->NinjaTrap::setName(NinjaTrap::getName());
    this->NinjaTrap::setMeleeAttackDamage(NinjaTrap::getMeleeAttackDamage());
    this->FragTrap::setRangedAttackDamage(FragTrap::getRangedAttackDamage());
    this->FragTrap::setArmorDamageReduction(FragTrap::getArmorDamageReduction());

    std::cout << "SuperTrap name constructor called" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SuperTrap destructing" << std::endl;
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