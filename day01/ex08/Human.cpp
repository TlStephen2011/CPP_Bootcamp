/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:03:51 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/03 17:06:53 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
    std::cout << "Using a melee attack on " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout << "Using a ranged attack on " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout << "Shouting at on " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
    std::string functions[] = {
        "meleeAttack",
        "rangedAttack",
        "intimidatingShout"
    };

    //typedef  void (Human::*attacks)(std::string const &);
    void (Human::*attacks[])(std::string const &) = {
        &Human::meleeAttack,
        &Human::rangedAttack,
        &Human::intimidatingShout
    };

    for (int i = 0; i < 3; i++)
    {
        if (action_name.compare(functions[i]) == 0)
        {
            (this->*attacks[i])(target);
            return;
        }
    }
    std::cout << "Invalid action on " << target << std::endl;
}