/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 01:37:10 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/11 11:18:51 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

Bureaucrat::Bureaucrat()
{
    return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else
    {
        this->_grade = grade;
    }
    
    return;
}

Bureaucrat::~Bureaucrat()
{
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy.getName()), _grade(copy.getGrade())
{
    return;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs)
{
    this->_grade = rhs.getGrade();
    return *this; 
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade - 1 <= 0)
    {
        throw Bureaucrat::GradeTooHighException();
    }

    this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade + 1 > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }

    this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade cannot be better than 1";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade cannot be worse than 150";
}

std::ostream& operator<<(std::ostream &o, Bureaucrat &other)
{
    o << other.getName() << ", bureaucrat grade " << other.getGrade();;
    return o;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << *this << " signs " << form << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << *this << " cannot sign " << form << " because " << e.what() << std::endl;
    }   
}