/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 18:12:14 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/02 18:12:14 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    return;
}

Zombie::Zombie(std::string val)
{
    this->_name = val;
}

Zombie::Zombie(std::string name = "", std::string type = "")
{
    this->_name = name;
    this->_type = type;
    return;
}

Zombie::~Zombie()
{
    return;
}

void Zombie::setName(std::string val)
{
    this->_name = val;
}

void Zombie::setType(std::string val)
{
    this->_type = val;
}

std::string Zombie::getType()
{
    return this->_type;
}

std::string Zombie::getName()
{
    return this->_name;
}

void Zombie::announce()
{
    std::cout << "<" << this->getName() << " (" << this->getType() \
    << ")> Braiiiiiiinnnssss...." << std::endl;
}