/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 00:27:27 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/14 00:38:18 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T &first, T &second)
{
    T temp;

    temp = first;
    first = second;
    second = temp;
}

template <typename T>
const T& min(T const &first, T const &second)
{
    return (first < second ? first : second);
}

template <typename T>
const T& max(T const &first, T const &second)
{
    return (first > second ? first : second);
}

int main()
{
    int a = 21;
    int b = 42;

    std::cout << "a: " << a << "\tb: " << b << std::endl;
    swap(a, b);
    std::cout << "a: " << a << "\tb: " << b << std::endl;
    std::cout << "min: " << min(a,b) << std::endl;
    std::cout << "max: " << max(a,b) << std::endl;

    float c = 99;
    float d = 55;

    std::cout << "c: " << c << "\td: " << d << std::endl;
    swap(c, d);
    std::cout << "c: " << c << "\td: " << d << std::endl;
    std::cout << "min: " << min(c,d) << std::endl;
    std::cout << "max: " << max(c,d) << std::endl;

    return 0;
}