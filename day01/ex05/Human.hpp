/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 22:15:19 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/02 22:15:19 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <string>
# include "Brain.hpp"

class Human
{

    public:
        Human();
        ~Human();
        std::string identify();
        Brain getBrain();
    private:
        Brain brain;
};

#endif