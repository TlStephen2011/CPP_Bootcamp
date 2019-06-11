/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 19:37:25 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/11 21:34:12 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>
#include <iostream>

Intern::Intern()
{
    return;
}

Intern::~Intern()
{
    return;
}

Intern::Intern(Intern const &copy)
{
    (void)copy;
    return;
}

Intern& Intern::operator=(Intern const &rhs)
{ 
    (void)rhs;
    return *this;
}

Form* Intern::makeForm(std::string formName, std::string target)
{
    Form *newForm;

    if (formName == "robotomy request")
    {
        newForm =  new RobotomyRequestForm(target);
    }
    else if (formName == "presidential pardon")
    {
        newForm = new PresidentialPardonForm(target);
    }
    else if (formName == "shrubbery creation")
    {
        newForm = new ShrubberyCreationForm(target);
    }
    else
    {
        throw Intern::FormNotFoundException();
    }
    std::cout << "Intern creates " << *newForm << std::endl;
    return newForm;
}

const char* Intern::FormNotFoundException::what() const throw()
{
    return  "Form cannot be found. Try a different department.";
}