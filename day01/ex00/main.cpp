/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 17:06:23 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/02 17:06:23 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void ponyOnTheStack()
{
    Pony myLittlePony;

    myLittlePony.setAge(5);
    myLittlePony.setName("My Little Pony");

    std::cout << "Pony Name: " << myLittlePony.getName() << std::endl;
    std::cout << "myLittlePony age: " << myLittlePony.getAge() << std::endl;
}

static void ponyOnTheHeap()
{
    Pony *twinkleFeet = new Pony();

    twinkleFeet->setAge(3);
    twinkleFeet->setName("Twinkle Feet");

    std::cout << "Pony Name: " << twinkleFeet->getName() << std::endl;
    std::cout << "TwinkleFeet age: " << twinkleFeet->getAge() << std::endl;
    
    delete twinkleFeet;
}

int main()
{
    std::cout << "Pony on the heap" << std::endl;
    ponyOnTheHeap();
    std::cout << "Pony on the stack" << std::endl;
    ponyOnTheStack();
    return 0;
}