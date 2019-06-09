/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 23:12:58 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 23:12:58 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include <string>
# include "Enemy.hpp"

class Character
{
    public:
        Character(std::string const &name);
        virtual ~Character();
        void recoverAP();
        void equip(AWeapon*);
        void attack(Enemy*);
        int getAP() const;
        AWeapon* getWeapon() const;
        std::string virtual getName() const;

    private:
        Character();
        Character(Character const&);
        Character& operator=(Character const&);
        std::string _name;
        int _apPoints;
        AWeapon *_weapon;

};

std::ostream& operator<<(std::ostream&, Character const&);

#endif