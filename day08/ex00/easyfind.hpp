/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 14:23:25 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/14 16:19:40 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template <typename T>
int easyfind(T &container, int toFind)
{
    typename T::iterator it;
    int i = 0;

    for (it = container.begin(); it != container.end(); it++)
    {
        if (*it == toFind)
            return i;
        i++;
    }

    return -1;
}

#endif