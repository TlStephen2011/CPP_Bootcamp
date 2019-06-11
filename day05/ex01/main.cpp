/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 01:57:09 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/11 11:21:35 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"

int main()
{
    Bureaucrat bob("Bob", 1);
    Bureaucrat jim("Jimmy", 150);
    Form f("Important form", 25, 20);
    Form dummy("Suicide form", 125, 100);

    bob.signForm(f);
    jim.signForm(dummy);

    std::cout << std::endl;
    std::cout << bob << std::endl;
    std::cout << f << std::endl;
    std::cout << dummy << std::endl;
    return 0;
}