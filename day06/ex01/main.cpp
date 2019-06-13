/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:06:36 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/13 16:34:48 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <climits>
#include <cstdlib>

typedef struct  _data
{
    std::string s1;
    int n;
    std::string s2;
}               Data;

void *serialize(void)
{
    Data *temp = new Data;
    char set[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    
    for(int i = 0; i < 8; i++)
    {
        temp->s1 += set[rand() % sizeof(set)];
    }

    for(int i = 0; i < 8; i++)
    {
        temp->s2 += set[rand() % sizeof(set)];
    }

    double n = static_cast<double>(rand());
    n = n * 2 - RAND_MAX;
    temp->n = static_cast<int>(n);
    
    return static_cast<void*>(temp);
}

Data* deserialize(void *raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    srand(time(NULL));
    void *data = serialize();
    Data *myPreciousData = deserialize(data);

    std::cout << "s1: " << myPreciousData->s1 << std::endl;
    std::cout << "s2: " << myPreciousData->s2 << std::endl;
    std::cout << "n:  " << myPreciousData->n << std::endl;

    delete myPreciousData;
    return 0;
}