/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 00:41:20 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/14 00:57:21 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T *arr, int size, void (*f)(T&))
{
    for (int i = 0; i < size; i++)
    {
        (*f)(arr[i]);
    }
}

template <typename T>
void doubleIt(T &n)
{
    n *= 2;
}

template <typename T>
void halfIt(T &n)
{
    n /= 2;
}

template <typename T>
void displayIt(T *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "  ";
    }
    std::cout << std::endl;
}


int main(void)
{
    int arr_1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float arr_2[10] = {24.42f, 21, 34, 54.23, 42, 32.54, 123.34, 2.3, 54.12, 12.21};

    displayIt(arr_1, 10);
    iter<int>(arr_1, 10, &doubleIt);
    displayIt(arr_1, 10);
    iter<int>(arr_1, 10, &halfIt);
    displayIt(arr_1, 10);

    std::cout << std::endl;

    displayIt(arr_2, 10);
    iter<float>(arr_2, 10, &doubleIt);
    displayIt(arr_2, 10);
    iter<float>(arr_2, 10, &halfIt);
    displayIt(arr_2, 10);

    return 0;
}