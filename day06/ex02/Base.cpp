/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:46:57 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/13 16:48:26 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{
    return;
}

Base::~Base()
{
    return;
}

Base::Base(Base const &copy)
{
    *this = copy;
}

Base& Base::operator=(Base const &rhs)
{
    static_cast<void>(rhs);
    return *this;
}

