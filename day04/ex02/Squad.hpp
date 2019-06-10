/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:22:09 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/10 18:25:59 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    public:
        Squad();
        virtual int getCount() const;
        virtual ISpaceMarine* getUnit(int) const;
        virtual int push(ISpaceMarine*);
        Squad(Squad const&);
        Squad& operator=(Squad const&);
        ~Squad();

    private:
        typedef struct      s_container
        {
            ISpaceMarine    *_unit;
            s_container     *next;
        }                   t_container;
        
        t_container *_marines;
        int _numUnits;
};

#endif