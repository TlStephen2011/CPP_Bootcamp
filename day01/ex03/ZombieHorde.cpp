/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 21:38:36 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/02 21:38:36 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    this->zombies = new Zombie[N];
    this->N = N;
    return;
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->zombies;
    return;
}

void ZombieHorde::announce()
{
    for (int i = 0; i < this->N; i++)
    {
        this->zombies[i].announce();
    }
}