/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:49:51 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 22:49:51 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        virtual ~PowerFist();
        virtual void attack() const;

    private:
        PowerFist& operator=(PowerFist const&);
        PowerFist(PowerFist const&);

};

#endif