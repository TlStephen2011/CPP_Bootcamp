/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 19:30:13 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/11 21:28:28 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include "Form.hpp"
# include <exception>

class Intern
{
    public:
        class FormNotFoundException : public std::exception
        {
            public:
                virtual const char* what() const throw();       
        };

        Intern();
        ~Intern();
        Intern(Intern const&);
        Intern& operator=(Intern const&);
        Form* makeForm(std::string, std::string);        

    private:        

};

#endif