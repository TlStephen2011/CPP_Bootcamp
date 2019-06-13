/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:51:03 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/13 16:51:11 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{
    return;
}

B::~B()
{
    return;
}

B::B(B const &copy)
{
    *this = copy;
}

B& B::operator=(B const &rhs)
{
    static_cast<void>(rhs);
    return *this;
}