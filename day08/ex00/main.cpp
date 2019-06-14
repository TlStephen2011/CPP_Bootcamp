/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 14:58:23 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/14 15:16:55 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> tempContainer;

    tempContainer.push_back(1);
    tempContainer.push_back(17);
    tempContainer.push_back(42);

    int index;

    index = easyfind(tempContainer, 17);
    std::cout << "easyfind found the value at index: " << index << std::endl;
    
    index = easyfind(tempContainer, 18);
    if (index != -1)
    {
       std::cout << "easyfind found the value at index: " << index << std::endl;
    }
    else
    {
        std::cout << "easyfind failed to find the value" << std::endl;
    }
    
    

    return 0;
}