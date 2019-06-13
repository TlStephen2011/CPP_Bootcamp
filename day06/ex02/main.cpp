/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:51:32 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/13 17:05:59 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    int n = rand() % 3 + 1;

    if (n == 1)
    {
        return new A();
    }
    else if (n == 2)
    {
        return new B();
    }
    else if (n == 3)
    {
        return new C();
    }
    else
    {
        return NULL;
    }
}

void identify_from_pointer(Base *p)
{
    A *tempA = dynamic_cast<A*>(p);
    if (tempA)
    {
        std::cout << "A" << std::endl;
    }
    B *tempB = dynamic_cast<B*>(p);
    if (tempB)
    {
        std::cout << "B" << std::endl;
    }
    C *tempC = dynamic_cast<C*>(p);
    if (tempC)
    {
        std::cout << "C" << std::endl;
    }
}

void identify_from_reference(Base &p)
{
    try
    {
        A &tempA = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        static_cast<void>(tempA);
    }
    catch(const std::exception& e)
    {
        static_cast<void>(e);
    }

    try
    {
        B &tempB = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        static_cast<void>(tempB);
    }
    catch(const std::exception& e)
    {
        static_cast<void>(e);
    }
    
    try
    {
        C &tempC = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        static_cast<void>(tempC);
    }
    catch(const std::exception& e)
    {
        static_cast<void>(e);
    }
}

int main()
{
    srand(time(NULL));
    Base* temp;
    
    temp = generate();
    identify_from_pointer(temp);
    identify_from_reference(*temp);    
    delete temp;

    std::cout << std::endl;

    temp = generate();
    identify_from_pointer(temp);
    identify_from_reference(*temp);    
    delete temp;

    std::cout << std::endl;

    temp = generate();
    identify_from_pointer(temp);
    identify_from_reference(*temp);    
    delete temp;
    
    std::cout << std::endl;
    return 0;
}

