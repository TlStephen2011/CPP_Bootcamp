/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 07:10:24 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/03 07:10:24 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>

class Weapon
{
    public:
        Weapon(std::string);
        ~Weapon();
        std::string const &getType();
        void setType(std::string);
    private:
        std::string type;
};

#endif