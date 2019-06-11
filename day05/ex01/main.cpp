/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 01:57:09 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/11 03:02:45 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"

int main()
{
    Bureaucrat bob("Bob", 1);
    Form f("important form", 25, 20);

    f.beSigned(bob);

    return 0;
}