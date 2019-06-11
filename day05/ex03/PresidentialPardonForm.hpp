/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:13:24 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/11 13:26:33 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFROM_HPP
# define PRESIDENTIALPARDONFROM_HPP
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(std::string);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(PresidentialPardonForm const&);
        PresidentialPardonForm(PresidentialPardonForm const&);
        virtual void execute(Bureaucrat const&) const;

    private:
        PresidentialPardonForm();
        std::string _target;
};

#endif