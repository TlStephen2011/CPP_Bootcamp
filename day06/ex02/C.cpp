/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:51:15 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/13 16:51:24 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C()
{
    return;
}

C::~C()
{
    return;
}

C::C(C const &copy)
{
    *this = copy;
}

C& C::operator=(C const &rhs)
{
    static_cast<void>(rhs);
    return *this;
}