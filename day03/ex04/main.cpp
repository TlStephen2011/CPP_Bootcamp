/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:30:30 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/07 17:37:50 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include "SuperTrap.hpp"

int main()
{
	srand(time(NULL));

	SuperTrap ultimateAssault("MegaLoad");

	std::cout << std::endl;

	ultimateAssault.FragTrap::rangedAttack("Another useless ninja");

	std::cout << std::endl;
	
    return 0;
}