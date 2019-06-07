/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:30:30 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/07 14:17:02 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	srand(time(NULL));

	//FragTrap
	FragTrap myChamp("Buster");

	myChamp.meleeAttack("Ranger");
	myChamp.rangedAttack("Subdued Lion");
	myChamp.takeDamage(10);
	myChamp.beRepaired(15);
	myChamp.vaulthunter_dot_exe("Irritating Mosquito");
	myChamp.vaulthunter_dot_exe("Cool Cucumber");
	myChamp.vaulthunter_dot_exe("Icy Eskimo");

	std::cout << std::endl;

	//ScavTrap
	ScavTrap entrance("randomDoor");

	entrance.takeDamage(20);
	entrance.beRepaired(25);
	entrance.meleeAttack("Lillith");
	entrance.rangedAttack("Mordecai");
	entrance.challengeNewcomer("Brick");
	entrance.challengeNewcomer("Roland");
	entrance.challengeNewcomer("Lillith");

    return 0;
}