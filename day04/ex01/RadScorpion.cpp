/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 23:10:31 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/10 17:17:03 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
    return;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
    return;
}

RadScorpion& RadScorpion::operator=(RadScorpion const &rhs)
{
    (void)rhs;
    return *this;
}

RadScorpion::RadScorpion(RadScorpion const &copy) : Enemy(copy)
{
    return;
}