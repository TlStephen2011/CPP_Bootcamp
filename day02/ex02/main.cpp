/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 20:34:12 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/06 12:33:47 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

int main()
{
    Fixed a;
    Fixed b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    Fixed e(1234.4321f);

    a = Fixed(30);

    std::cout << "a - e =" << (a - e) << std::endl; 
    
    return 0;
}