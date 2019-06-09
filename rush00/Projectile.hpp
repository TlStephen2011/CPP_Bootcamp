/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 21:12:18 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/08 21:12:18 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECTILE_HPP
# define PROJECTILE_HPP
# include "Character.hpp"

class Projectile : public Character {

    public:

        Projectile();
        ~Projectile();
        Projectile(int, int);
        Projectile& operator=(Projectile const&);
        Projectile(Projectile const&);
        void move();
        
    private:

};

#endif