/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:03:54 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/13 15:55:42 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <string>
#include <climits>
#include <cmath>
#include <sstream>
#include <iomanip>

Converter::Converter()
{
    return;
}

Converter::Converter(char const *str)
{
    this->_val = str;
    this->setPrecision();
    if (strlen(str) == 1 && isprint(str[0]) && !isdigit(str[0]))
    {
        this->_floatVal = static_cast<int>(*str);
    }
    else
    {
        this->_floatVal = atof(this->_val.c_str());
    }
}

Converter::~Converter()
{
    return;
}

Converter::Converter(Converter const &copy)
{
    static_cast<void>(copy);
    return;
}

Converter& Converter::operator=(Converter const &rhs)
{
    static_cast<void>(rhs);
    return *this;
}

std::string Converter::toChar() const
{
    try
    {
        char c;

        if (std::isnan(this->_floatVal))
        {
            throw Converter::ImpossibleException();
        }
        
        c = static_cast<char>(this->_floatVal);
        if (!std::isprint(c))
        {
            throw Converter::NonDisplayableException();
        }
        return "'" + std::string(1, c) + "'";
    }
    catch(const std::exception& e)
    {
        return e.what();
    }
    
}

std::string Converter::toInt() const
{
    double d = this->_floatVal;

    try
    {
        if (std::isnan(d) || std::isinf(d))
        {
            throw Converter::ImpossibleException();
        }

        if (d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN))
        {
            throw Converter::ImpossibleException();
        }

        std::stringstream ss;
        ss << static_cast<int>(d);
        return ss.str();       
    }
    catch(const std::exception& e)
    {
        return e.what();
    }
}

std::string Converter::toFloat() const
{
    float d;
    std::stringstream ss;
    
    d = static_cast<float>(this->_floatVal);
    ss << std::setprecision(this->_precision) << std::fixed \
    << d << "f";
    return ss.str();
}

std::string Converter::toDouble() const
{
    double d;
    std::stringstream ss;
    
    d = static_cast<double>(this->_floatVal);
    ss << std::setprecision(this->_precision) << std::fixed \
    << d;
    return ss.str();
}

void Converter::setPrecision()
{
    unsigned int     beforePoint;
    unsigned int     afterPoint;
    const char *str = this->_val.c_str();
    
    beforePoint = 0;
    while (str[beforePoint] && str[beforePoint] != '.')
    {
        beforePoint += 1;
    }
    afterPoint = beforePoint + 1;
    while (str[afterPoint] && isdigit(str[afterPoint]))
    {
        afterPoint += 1;
    }
    afterPoint -= beforePoint;
    this->_precision = ((strlen(str) == beforePoint || afterPoint == 1) ? 1 : afterPoint - 1);
}

int Converter::getPrecision() const
{
    return this->_precision;
}

Converter::ImpossibleException::ImpossibleException()
{
    return;
}

Converter::ImpossibleException::~ImpossibleException() throw()
{
    return;
}

Converter::ImpossibleException::ImpossibleException(Converter::ImpossibleException const &copy)
{
    *this = copy;
}

Converter::ImpossibleException &Converter::ImpossibleException::operator=(Converter::ImpossibleException const &rhs)
{
    static_cast<void>(rhs);
    return *this;
}

const char *Converter::ImpossibleException::what() const throw() 
{
    return "impossible";
}

Converter::NonDisplayableException::NonDisplayableException()
{
    return;
}

Converter::NonDisplayableException::~NonDisplayableException() throw()
{
    return;
}

Converter::NonDisplayableException::NonDisplayableException(Converter::NonDisplayableException const &copy)
{
    *this = copy;
}

Converter::NonDisplayableException &Converter::NonDisplayableException::operator=(Converter::NonDisplayableException const &rhs)
{
    static_cast<void>(rhs);
    return *this;
}

const char *Converter::NonDisplayableException::what() const throw() 
{
    return "Non displayable";
}