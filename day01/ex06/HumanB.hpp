/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 09:41:56 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/03 09:41:56 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include "Weapon.hpp"
# include <iostream>

class HumanB
{
    public:
        HumanB(std::string);
        ~HumanB();
        void setWeapon(Weapon&);
        void attack();
    private:
        std::string name;
        Weapon *weapon;
};

#endif