/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:49:55 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/13 16:50:06 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A()
{
    return;
}

A::~A()
{
    return;
}

A::A(A const &copy)
{
    *this = copy;
}

A& A::operator=(A const &rhs)
{
    static_cast<void>(rhs);
    return *this;
}