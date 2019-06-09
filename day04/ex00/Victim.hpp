/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 21:40:30 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 21:40:30 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>

class Victim
{
    public:
        Victim();
        Victim(std::string);
        ~Victim();
        Victim(Victim const&);
        Victim& operator=(Victim const&);
        std::string getName() const;
        virtual void getPolyMorphed() const;
        void setName(std::string);
    private:
        std::string _name;
              
};

std::ostream& operator<<(std::ostream& os, Victim const&);

#endif