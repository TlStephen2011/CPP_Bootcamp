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
#include "Intern.hpp"

int main()
{
    srand(time(NULL));
    
    Intern someRandomIntern;

    try
    {
        Bureaucrat arthur("Arthur", 5);
        Form *ppf = someRandomIntern.makeForm("presidential pardon", "Harry");
        ppf->execute(arthur);
        arthur.signForm(*ppf);
        ppf->execute(arthur);

        Form *rrf = someRandomIntern.makeForm("robotomy request", "Ron");
        rrf->execute(arthur);
        arthur.signForm(*rrf);
        rrf->execute(arthur);

        Form *scf = someRandomIntern.makeForm("shrubbery creation", "Privet Drive, Little Whinging");
        scf->execute(arthur);
        arthur.signForm(*scf);
        scf->execute(arthur); 

        Form *rubbish = someRandomIntern.makeForm("I dnt know wtf I'm doing", "Me, Myself & I");
        rubbish->getTarget();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    

    return 0;
}