/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:20:12 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/04 14:20:20 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
    return;
}

Fixed::Fixed(int const val)
{
    this->value = val << Fixed::fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
    return;
}

Fixed::Fixed(float const val)
{
    this->value = roundf(val * (1 << Fixed::fractionalBits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int Fixed::getRawBits() const
{  
    return this->value;
}

void Fixed::setRawBits(const int raw)
{
    this->value = raw;
}

Fixed& Fixed::operator=(Fixed const& rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->value = rhs.getRawBits();
    return *this;
}

float Fixed::toFloat() const
{
    return ((float)(this->value) / ( 1 << Fixed::fractionalBits));
}

int Fixed::toInt() const
{
    return (this->value >> Fixed::fractionalBits);
}

std::ostream& operator<<(std::ostream& o, Fixed const &val)
{
    o << val.toFloat();
    return o;
}

const int Fixed::fractionalBits = 8;