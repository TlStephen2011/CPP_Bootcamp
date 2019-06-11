/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 02:34:32 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/11 11:17:46 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form() :
    _target("N/A"),
    _name("default"),
    _minGradeToSign(1),
    _minGradeToExecute(1),
    _isSigned(false)
{
    return;
}

Form::Form(std::string target, std::string name, int signingGrade, int executeGrade) :
    _target(target),
    _name(name),
    _minGradeToSign(signingGrade),
    _minGradeToExecute(executeGrade),
    _isSigned(false)
{
    if (signingGrade > 150 || executeGrade > 150)
    {
        throw Form::GradeTooLowException();
    }
    else if (signingGrade < 1 || executeGrade < 1)
    {
        throw Form::GradeTooHighException();
    }

    return;
}

Form::~Form()
{
    return;
}

Form::Form(Form const &copy) :
    _target(copy.getTarget()),
    _name(copy.getName()),
    _minGradeToSign(copy.getMinGradeToSign()),
    _minGradeToExecute(copy.getMinGradeToExecute()),
    _isSigned(copy.getFormSignedState())
{
    return;
}

Form& Form::operator=(Form const &rhs)
{
    this->_isSigned = rhs.getFormSignedState();
    return *this;
}

std::string Form::getName() const
{
    return this->_name;
}

int Form::getMinGradeToSign() const
{
    return this->_minGradeToSign;
}

int Form::getMinGradeToExecute() const
{
    return this->_minGradeToExecute;
}

bool Form::getFormSignedState() const
{
    return this->_isSigned;
}

void Form::beSigned(Bureaucrat const &b)
{
    int grade = b.getGrade();

    if (grade <= this->getMinGradeToSign())
    {
        this->_isSigned = true;
    }
    else
    {
        throw Form::GradeTooLowException();
    }
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade requirement too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade requirement too low";
}

const char* Form::ExecuteOnUnsignedFormException::what() const throw()
{
    return "Form is not yet signed and therefore cannot be executed on";
}

std::ostream& operator<<(std::ostream &o, Form const &other)
{

    const char* isSigned = other.getFormSignedState() ? "signed" : "unsigned";

    o << other.getName() << ", form has min grade to sign of " << \
    other.getMinGradeToSign() << " and a min grade to execute of " << \
    other.getMinGradeToExecute() << " and is " << isSigned;
    return o;
}

std::string Form::getTarget() const
{
    return this->_target;
}

bool Form::canExecute(Bureaucrat const &b) const
{
    if (b.getGrade() > this->_minGradeToExecute)
    {
        throw Form::GradeTooLowException();
    }
    else if (this->_isSigned == false)
    {
        throw Form::ExecuteOnUnsignedFormException();
    }
    return true;
}