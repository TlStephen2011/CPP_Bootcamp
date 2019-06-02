/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 22:16:07 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/02 22:16:07 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
    return;
}

Human::~Human()
{
    return;
}

std::string Human::identify()
{
    return this->brain.identify();
}

Brain Human::getBrain()
{
    return this->brain;
}