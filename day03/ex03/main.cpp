/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:30:30 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/07 16:44:52 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

int main()
{
	srand(time(NULL));

	FragTrap fragChamp("Buster");
	ClapTrap clapChamp("Buster's mom");
	NinjaTrap ninjaChamp("Akali");
	NinjaTrap ninjaChampOpposition("Kata");
	ScavTrap scavChamp("Brick");

	std::cout << std::endl;

	ninjaChamp.ninjaShoebox(fragChamp);
	ninjaChamp.ninjaShoebox(clapChamp);
	ninjaChamp.ninjaShoebox(ninjaChampOpposition);
	ninjaChamp.ninjaShoebox(scavChamp);

	std::cout << std::endl;
	
    return 0;
}