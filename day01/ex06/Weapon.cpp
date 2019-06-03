/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 07:12:47 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/03 07:12:47 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string val)
{
    this->type = val;
    return;
}

Weapon::~Weapon()
{
    return;
}

std::string const &Weapon::getType()
{
    return this->type;
}

void Weapon::setType(std::string val)
{
    this->type = val;
}