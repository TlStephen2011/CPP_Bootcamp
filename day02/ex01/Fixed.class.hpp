/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:14:13 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/04 14:19:58 by tstephen         ###   ########.fr       */
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