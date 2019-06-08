/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:49:30 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/08 16:27:05 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
    public:
        SuperTrap();
        SuperTrap(std::string);
        ~SuperTrap();
        SuperTrap(SuperTrap const&);
        SuperTrap& operator=(SuperTrap const&);
        void rangedAttack(std::string const &target) const;
        void meleeAttack(std::string const &target) const;    
    private:
};

#endif