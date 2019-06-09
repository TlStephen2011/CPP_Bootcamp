/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 23:10:46 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 23:10:46 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        virtual ~RadScorpion();

    private:
        RadScorpion& operator=(RadScorpion const&);
        RadScorpion(RadScorpion const&);
};

#endif