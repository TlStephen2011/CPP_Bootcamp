/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 14:23:25 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/14 15:17:23 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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