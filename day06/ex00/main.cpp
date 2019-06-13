/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:08:52 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/13 15:40:26 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    Converter *convert;

    for (int i = 1; i < argc; i++)
    {
        convert = new Converter(argv[i]);
        
        std::cout << "char: " << convert->toChar() << std::endl;
        std::cout << "int: " << convert->toInt() << std::endl;
        std::cout << "float: " << convert->toFloat() << std::endl;
        std::cout << "double: " << convert->toDouble() << std::endl;

        delete convert;
    }

    return 0;
}