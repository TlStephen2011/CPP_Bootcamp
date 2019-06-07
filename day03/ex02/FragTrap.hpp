/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:30:48 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/07 15:24:24 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
      FragTrap();
      ~FragTrap();
      FragTrap(FragTrap const &copy);
      FragTrap(std::string name);
      FragTrap& operator=(FragTrap const &rhs);
      void vaulthunter_dot_exe(std::string const &target);     

    private:
      void deathFromBelow(std::string const &target) const;
      void bladeWall(std::string const &target) const;
      void angryGrenade(std::string const &target) const;
      void hookShot(std::string const &target) const;
      void dashToFlank(std::string const &target) const;
};

#endif