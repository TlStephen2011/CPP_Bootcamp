/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:30:48 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/06 23:43:38 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>

class FragTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(FragTrap const &copy);
        FragTrap(std::string name);
        FragTrap& operator=(FragTrap const &rhs);
        void rangedAttack(std::string const &target) const;
        void meleeAttack(std::string const &target) const;
        unsigned int takeDamage(unsigned int amount);
        unsigned int beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const &target);
		
        // Getters
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

    protected:

    private:
		void deathFromBelow(std::string const &target) const;
		void bladeWall(std::string const &target) const;
		void angryGrenade(std::string const &target) const;
		void hookShot(std::string const &target) const;
		void dashToFlank(std::string const &target) const;
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