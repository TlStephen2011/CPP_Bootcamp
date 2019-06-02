/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 18:19:59 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/02 18:19:59 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    Zombie zombie("Minnie", "Really Basic");

    zombie.announce();

    ZombieEvent event;
    event.setZombieType("Alien");
    event.randomChump();
    event.randomChump();
    event.randomChump();
    event.randomChump();
    event.randomChump();
    
    Zombie *z1 = event.newZombie("Timothy");
    Zombie *z2 = event.newZombie("Wrak");
    
    delete z1;
    delete z2;
    return 0;
}