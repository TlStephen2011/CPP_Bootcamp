/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 14:23:25 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/15 12:41:16 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>

template <typename T>
int easyfind(T &container, int toFind)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), toFind);
    if (it != container.end())
    {
        return std::distance(container.begin(), it);
    }
    return -1;
}

#endif