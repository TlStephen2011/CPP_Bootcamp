/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 21:50:51 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 21:50:51 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon();
        Peon(std::string);
        ~Peon();
        Peon(Peon const&);
        Peon& operator=(Peon const&);
        virtual void getPolyMorphed() const;

    private:
        
};

#endif