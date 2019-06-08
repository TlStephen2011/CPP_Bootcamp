/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:49:51 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/08 16:17:28 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(ScavTrap const &copy);
        ScavTrap(std::string name);
        ScavTrap& operator=(ScavTrap const &rhs);
        void challengeNewcomer(std::string const &target);
        void rangedAttack(std::string const &target) const;
        void meleeAttack(std::string const &target) const;
		    
    protected:

    private:
        void barrier(std::string const &target) const;
        void caustic(std::string const &target) const;
        void threaten(std::string const &target) const;
        void charm(std::string const &target) const;
        void disappear(std::string const &target) const;    
};

#endif