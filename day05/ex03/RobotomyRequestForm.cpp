/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 18:47:41 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/11 18:59:17 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <string>
#include <math.h>

RobotomyRequestForm::RobotomyRequestForm() :
    Form("N/A", "RobotomyRequestForm", 72, 45)
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    Form(target, "RobotomyRequestForm", 72, 45)
{
    return;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    (void)rhs;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    try
    {
        this->canExecute(executor);
        int randomNum = rand() % 100 + 1;
        if (randomNum > 50)
        {
            std::cout << "*zzzzzshhhh* " << this->getTarget() << " has been robotomized successfully." << std::endl;
        }
        else
        {
            std::cout << "Robotomizing " << this->getTarget() << " has failed." << std::endl;
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}