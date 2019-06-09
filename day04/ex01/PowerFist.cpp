/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:49:20 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 22:49:20 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <iostream>
#include "AWeapon.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
    return;
}

PowerFist::~PowerFist()
{
    return;
}

PowerFist& PowerFist::operator=(PowerFist const &rhs)
{
    //TODO:: complete assignment
    (void)rhs;    
    return *this;
}

PowerFist::PowerFist(PowerFist const &copy) : AWeapon(copy)
{
    return;
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}