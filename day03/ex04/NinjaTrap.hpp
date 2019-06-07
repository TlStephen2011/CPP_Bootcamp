/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:16:57 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/07 16:35:46 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>

class NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap();
        NinjaTrap(std::string);
        ~NinjaTrap();
        NinjaTrap(NinjaTrap const&);
        NinjaTrap& operator=(NinjaTrap const&);
        void ninjaShoebox(ClapTrap&);
        void ninjaShoebox(NinjaTrap&);
        void ninjaShoebox(FragTrap&);
        void ninjaShoebox(ScavTrap&);
    private:
    
};

#endif