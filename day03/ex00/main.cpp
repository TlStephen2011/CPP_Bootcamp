/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:30:30 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/06 23:46:44 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main()
{
	FragTrap myChamp("Buster");

	myChamp.meleeAttack("Ranger");
	myChamp.rangedAttack("Subdued Lion");
	myChamp.takeDamage(10);
	myChamp.beRepaired(15);
	myChamp.vaulthunter_dot_exe("Irritating Mosquito");
	myChamp.vaulthunter_dot_exe("Cool Cucumber");
	myChamp.vaulthunter_dot_exe("Icy Eskimo");

    return 0;
}