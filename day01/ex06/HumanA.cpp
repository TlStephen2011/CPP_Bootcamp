/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 08:00:55 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/03 08:00:55 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
    name(name),
    weapon(weapon)
{
    return;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " \
    << this->weapon.getType() << std::endl;
}