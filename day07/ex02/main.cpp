/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 01:31:00 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/14 12:26:46 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
    Array<int> temp = Array<int>(5);

    temp[0] = 0;
    temp[1] = 1;
    temp[2] = 2;
    temp[3] = 3;
    temp[4] = 4;

    for (int i = 0; i < temp.getSize(); i++)
    {
        std::cout << temp[i] << "\t";
    }
    std::cout << std::endl;

    try
    {
        std::cout << temp[5] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}