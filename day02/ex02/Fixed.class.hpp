/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:14:13 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/06 13:36:14 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(int const);
        Fixed(float const);
        ~Fixed();
        Fixed(Fixed const&);
        Fixed& operator=(Fixed const &);
        bool operator<(Fixed const&) const;
        bool operator<=(Fixed const&) const;
        bool operator>=(Fixed const&) const;
        bool operator>(Fixed const&) const;
        bool operator==(Fixed const&) const;
        bool operator!=(Fixed const&) const;
        Fixed operator+(Fixed const&) const;
        Fixed operator-(Fixed const&) const;
        Fixed operator*(Fixed const&) const;
        Fixed operator/(Fixed const&) const;
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        static Fixed& min(Fixed&, Fixed&);
        static const Fixed& min(const Fixed&, const Fixed&);
        static Fixed& max(Fixed&, Fixed&);
        static const Fixed& max(const Fixed&, const Fixed&);
        int getRawBits() const;
        void setRawBits(int const);
        float toFloat() const;
        int toInt() const;
    private:
        static const int fractionalBits;
        int value;
};

std::ostream& operator<<(std::ostream&, Fixed const& );


#endif