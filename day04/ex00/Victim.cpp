/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 21:25:58 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 21:25:58 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>

Victim::Victim()
{
    this->_name = "...";
    return;
}

Victim::Victim(std::string name) :
    _name(name)
{
    std::cout << "Some random victim called " \
    << this->_name << " just popped !" << std::endl;
    return;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
    return;
}

Victim::Victim(Victim const &copy)
{
    *this = copy;
}

Victim& Victim::operator=(Victim const &rhs)
{
    this->_name = rhs.getName();
    return *this;
}


std::string Victim::getName() const
{
    return this->_name;
}


std::ostream& operator<<(std::ostream &o, Victim const &inp)
{
    o << "I'm " << inp.getName() << " and I like otters !" << std::endl;
    return o;
}

void Victim::getPolyMorphed() const
{
    std::cout << this->getName() << " has been turned into a cute little sheep !" << std::endl;
}

void Victim::setName(std::string name)
{
    this->_name = name;    
}