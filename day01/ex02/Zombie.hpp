/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 18:12:21 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/02 18:12:21 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
    public:
        ~Zombie();
        Zombie();
        Zombie(std::string);
        Zombie(std::string, std::string);
        std::string getName();
        void setName(std::string);
        std::string getType();
        void setType(std::string);
        void announce();
    private:
        std::string _type;
        std::string _name;
};

#endif