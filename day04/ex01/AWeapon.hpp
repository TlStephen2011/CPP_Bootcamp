/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:13:20 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 22:13:20 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <string>

class AWeapon
{
    public:
        AWeapon(std::string const &name, int apcost, int damage);
        virtual ~AWeapon();
        AWeapon(AWeapon const &copy);
        AWeapon& operator=(AWeapon const &rhs);
        std::string virtual getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;

    private:
        AWeapon();
        std::string _name;
        int _apcost;
        int _damage;

};

#endif