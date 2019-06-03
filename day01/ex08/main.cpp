/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:03:45 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/03 17:05:51 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
    Human bob;

    bob.action("meleeAttack", "John");
    bob.action("rangedAttack", "John");
    bob.action("intimidatingShout", "John");
    bob.action("impossible", "John");
    return 0;
}