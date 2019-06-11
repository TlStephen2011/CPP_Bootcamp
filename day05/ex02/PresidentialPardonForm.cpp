/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 17:51:09 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/11 18:40:32 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>

PresidentialPardonForm::PresidentialPardonForm() :
    Form("N/A", "PresidentialPardonForm", 25, 5)
{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    Form(target, "PresidentialPardonForm", 25, 5)
{
    return;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    (void)rhs;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    try
    {
        this->canExecute(executor);
        std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}