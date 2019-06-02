/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 22:12:45 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/02 22:12:45 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    setAddress();
    return;
}

Brain::~Brain()
{
    return;
}

void Brain::setAddress()
{
    std::stringstream buff;

    buff << this;
    this->_address = buff.str();
    return;
}

std::string Brain::identify()
{
    return this->_address;
}

std::string Brain::getAddress()
{
    return this->_address;
}