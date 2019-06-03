/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 07:59:39 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/03 07:59:39 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include  <string>
# include <iostream>

class HumanA
{
    public:
        HumanA(std::string, Weapon&);
        void attack();
    private:
        std::string name;
        Weapon &weapon;
};

#endif