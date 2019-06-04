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

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
    return;
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
    return;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;    
    return this->value;
}

void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

Fixed& Fixed::operator=(Fixed const& rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->value = rhs.getRawBits();
    return *this;
}

const int Fixed::fractionalBits = 8;