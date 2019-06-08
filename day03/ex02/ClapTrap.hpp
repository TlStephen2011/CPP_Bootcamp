/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:41:19 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/08 16:12:03 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string> 

class ClapTrap
{
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(ClapTrap const &copy);
        ClapTrap(std::string name);
        ClapTrap& operator=(ClapTrap const &rhs);
        unsigned int takeDamage(unsigned int amount);
        unsigned int beRepaired(unsigned int amount);

        //Getters
        unsigned int getHitPoints() const;
        unsigned int getMaxHitPoints() const;
        unsigned int getEnergyPoints() const;
        unsigned int getMaxEnergyPoints() const;
        unsigned int getLevel() const;
        std::string getName() const;
        unsigned int getMeleeAttackDamage() const;
        unsigned int getRangedAttackDamage() const;
        unsigned int getArmorDamageReduction() const;

        //Setters
        void setHitPoints(unsigned int amount);
        void setMaxHitPoints(unsigned int amount);
        void setEnergyPoints(unsigned int amount);
        void setMaxEnergyPoints(unsigned int amount);
        void setLevel(unsigned int amount);
        void setName(std::string name);
        void setMeleeAttackDamage(unsigned int amount);
        void setRangedAttackDamage(unsigned int amount);
        void setArmorDamageReduction(unsigned int amount);  


    private:
        unsigned int _hitPoints;
        unsigned int _maxHitPoints;
        unsigned int _energyPoints;
        unsigned int _maxEnergyPoints;
        unsigned int _level;
        std::string _name;
        unsigned int _meleeAttackDamage;
        unsigned int _rangedAttackDamage;
        unsigned int _armorDamageReduction;
};

#endif