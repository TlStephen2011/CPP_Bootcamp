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
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include "Form.hpp"
#include <math.h>
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    srand(time(NULL));
    
    Bureaucrat arthur("Arthur", 5);
    
    PresidentialPardonForm ppf("Harry");
    ppf.execute(arthur);
    arthur.signForm(ppf);
    ppf.execute(arthur);

    RobotomyRequestForm rrf("Ron");
    rrf.execute(arthur);
    arthur.signForm(rrf);
    rrf.execute(arthur);

    ShrubberyCreationForm scf("Privet Drive, Little Whinging");
    scf.execute(arthur);
    arthur.signForm(scf);
    scf.execute(arthur);
    return 0;
}