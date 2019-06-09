/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:34:52 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 22:34:52 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <iostream>
#include "AWeapon.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
    return;
}

PlasmaRifle::~PlasmaRifle()
{
    return;
}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
    //TODO:: complete assignment
    (void)rhs;    
    return *this;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) : AWeapon(copy)
{
    return;
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}