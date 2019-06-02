/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 21:47:09 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/02 21:47:09 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string test = "HI THIS IS BRAIN";
    std::string *ptrTest = &test;
    std::string &refTest = test;

    std::cout << "Using Pointer: " << *ptrTest << std::endl;
    std::cout << "Using Reference: " << refTest << std::endl;

    return 0;
}