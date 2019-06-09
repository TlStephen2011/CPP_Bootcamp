/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:59:38 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 22:59:38 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        virtual ~SuperMutant();
        virtual void takeDamage(int);
        
    private:
        SuperMutant& operator=(SuperMutant const&);
        SuperMutant(SuperMutant const&);

};

#endif