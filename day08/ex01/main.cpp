/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 22:44:03 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/15 13:11:14 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"
#include <algorithm>

int main()
{
    Span sp = Span(5);

    sp.addNumber(0);
    sp.addNumber(0);
    sp.addNumber(-1);
    sp.addNumber(-2);
    sp.addNumber(0);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    Span sp2 = Span(0);

    try
    {
        std::cout << sp2.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        sp2.addNumber(5);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    //Testing addNumber via iterator
    static const int arr[] = {16, 2, 77, 29, 31, 42, 9, 8, 45, 12};
    std::vector<int> v(arr, arr + sizeof(arr) / sizeof(arr[0]));
    Span sp3(10);

    try
    {
        sp3.addNumber(v.begin(), v.end());
        std::cout << sp3.shortestSpan() << std::endl;
        std::cout << sp3.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    sp3.display();

    return 0;
}