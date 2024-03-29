/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:20:12 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/06 13:37:59 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
    this->value = 0;
    return;
}

Fixed::Fixed(int const val)
{
    this->value = val << Fixed::fractionalBits;
}

Fixed::Fixed(Fixed const &copy)
{
    *this = copy;
    return;
}

Fixed::Fixed(float const val)
{
    this->value = roundf(val * (1 << Fixed::fractionalBits));
}

Fixed::~Fixed()
{
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

bool Fixed::operator<(Fixed const &rhs) const
{
    if (this->toFloat() < rhs.toFloat())
        return true;
    return false;
}

bool Fixed::operator<=(Fixed const &rhs) const
{
    if (this->toFloat() <= rhs.toFloat())
        return true;
    return false;
}

bool Fixed::operator>=(Fixed const &rhs) const
{
    if (this->toFloat() >= rhs.toFloat())
        return true;
    return false;
}

bool Fixed::operator>(Fixed const &rhs) const
{
    if (this->toFloat() > rhs.toFloat())
        return true;
    return false;
}

bool Fixed::operator==(Fixed const &rhs) const
{
    if (this->toFloat() == rhs.toFloat())
        return true;
    return false;
}

bool Fixed::operator!=(Fixed const &rhs) const
{
    if (this->toFloat() != rhs.toFloat())
        return true;
    return false;
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
    Fixed temp(this->toFloat() + rhs.toFloat());
    return temp;
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
    Fixed temp(this->toFloat() - rhs.toFloat());
    return temp;
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
    Fixed temp(this->toFloat() * rhs.toFloat());
    return temp;
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
    Fixed temp(this->toFloat() / rhs.toFloat());
    return temp;
}

Fixed& Fixed::operator++()
{
    this->value += 1;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    operator++();
    return temp;
}

Fixed& Fixed::operator--()
{
    this->value -= 1;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    operator--();
    return temp;
}

Fixed& Fixed::min(Fixed &val1, Fixed &val2)
{
    if (val1 < val2)
    {
        return val1;
    }
    else
    {
        return val2;
    }
}

const Fixed& Fixed::min(Fixed const &val1, Fixed const &val2)
{
    if (val1 < val2)
    {
        return val1;
    }
    else
    {
        return val2;
    }
}

Fixed& Fixed::max(Fixed &val1, Fixed &val2)
{
    if (val1 > val2)
    {
        return val1;
    }
    else
    {
        return val2;
    }
}

const Fixed& Fixed::max(Fixed const &val1, Fixed const &val2)
{
    if (val1 > val2)
    {
        return val1;
    }
    else
    {
        return val2;
    }
}

const int Fixed::fractionalBits = 8;