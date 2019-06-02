/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 18:30:23 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/02 18:30:23 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>

ZombieEvent::ZombieEvent()
{
    return;
}

ZombieEvent::~ZombieEvent()
{
    return;
}

Zombie* ZombieEvent::newZombie(std::string val)
{   
    Zombie *zombie = new Zombie(val, this->_type);
    return zombie;
}

void ZombieEvent::randomChump()
{
    std::string randomNames[] = {
        "Zork",
        "Fluttershy",
        "Starbird"
    };

    int num = rand() % 3;

    Zombie newZombie(randomNames[num], this->_type);
    newZombie.announce();
}

void ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
}