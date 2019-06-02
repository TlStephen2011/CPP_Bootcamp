/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 17:06:14 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/02 17:06:14 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
    std::cout << "Pony contructor" << std::endl;
    return;
}

Pony::~Pony()
{
    std::cout << this->_name << " destructor" << std::endl;
    return;
}

int Pony::getAge()
{
    return this->_age;
}

void Pony::setAge(int value)
{
    this->_age = value;
}

std::string Pony::getName()
{
    return this->_name;
}

void Pony::setName(std::string value)
{
    this->_name = value;
}

