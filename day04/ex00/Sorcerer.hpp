/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 21:23:58 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 21:23:58 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <string>
# include "Victim.hpp"

class Sorcerer
{
    public:
        Sorcerer(std::string, std::string);
        ~Sorcerer();
        Sorcerer(Sorcerer const&);
        Sorcerer& operator=(Sorcerer const&);
        std::string getName() const;
        std::string getTitle() const;
        void polymorph(Victim const&);
        
    private:
        std::string _name;
        std::string _title;
        Sorcerer();
};

std::ostream& operator<<(std::ostream& os, Sorcerer const&);

#endif