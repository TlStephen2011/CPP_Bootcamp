/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:03:48 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/03 16:10:13 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <string>
# include <iostream>

class Human
{
    private:
        void meleeAttack(std::string const & target);
        void rangedAttack(std::string const & target);
        void intimidatingShout(std::string const & target);
    public:
        void action(std::string const & action_name, std::string const & target);
};

#endif