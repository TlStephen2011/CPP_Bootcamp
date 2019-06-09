/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 21:54:18 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 21:54:18 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include <iostream>

Peon::Peon()
{
    std::cout << "Zog zog" << std::endl;
    return;
}

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog" << std::endl;
    return;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
    return;
}

Peon::Peon(Peon const &copy)
{
    *this = copy;
}

Peon& Peon::operator=(Peon const &rhs)
{
    this->setName(rhs.getName());
    return *this;
}

void Peon::getPolyMorphed() const
{
    std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}