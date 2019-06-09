/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 23:01:09 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 23:01:09 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
    return;
}

SuperMutant& SuperMutant::operator=(SuperMutant const &rhs)
{
    //TODO:: complete assignment
    (void)rhs;    
    return *this;
}

SuperMutant::SuperMutant(SuperMutant const &copy) : Enemy(copy)
{
    return;
}

void SuperMutant::takeDamage(int amount)
{
    if (amount > 3)
    {
        amount -= 3;
        this->Enemy::takeDamage(amount);
    }
}