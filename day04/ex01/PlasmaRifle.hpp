/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:32:07 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 22:32:07 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE
# define PLASMA_RIFLE
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
        virtual ~PlasmaRifle();
        virtual void attack() const;

    private:
        PlasmaRifle& operator=(PlasmaRifle const&);
        PlasmaRifle(PlasmaRifle const&);

};

#endif