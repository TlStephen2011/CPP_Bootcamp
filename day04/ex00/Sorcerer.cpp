/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 21:25:58 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 21:25:58 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>
#include "Victim.hpp"

Sorcerer::Sorcerer()
{
    return;
}

Sorcerer::Sorcerer(std::string name, std::string title) :
    _name(name),
    _title(title)
{
    std::cout << this->_name << ", " << this->_title << "," \
    << "is born !" << std::endl;
    return;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << " is dead." \
    << " Consequences will never be the same !" << std::endl;
    return;
}

Sorcerer::Sorcerer(Sorcerer const &copy)
{
    *this = copy;
}

Sorcerer& Sorcerer::operator=(Sorcerer const &rhs)
{
    this->_name = rhs.getName();
    this->_title = rhs.getTitle();
    return *this;
}


std::string Sorcerer::getName() const
{
    return this->_name;
}

std::string Sorcerer::getTitle() const
{
    return this->_title;
}

std::ostream& operator<<(std::ostream &o, Sorcerer const &inp)
{
    o << "I am " << inp.getName() << ", " << inp.getTitle() \
    << ", and I like ponies !" << std::endl;
    return o;
}

void Sorcerer::polymorph(Victim const &victim)
{
    victim.getPolyMorphed();
}