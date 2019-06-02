/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 18:22:02 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/02 18:22:02 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
    public:
        ZombieEvent();
        ~ZombieEvent();
        void setZombieType(std::string);
        Zombie* newZombie(std::string name);
        void randomChump();
    private:
        std::string _type;
};

#endif