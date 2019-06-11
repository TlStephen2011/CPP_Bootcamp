/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:25:27 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/11 13:26:11 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(std::string);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(RobotomyRequestForm const&);
        RobotomyRequestForm(RobotomyRequestForm const&);
        virtual void execute(Bureaucrat const&) const;

    private:
        RobotomyRequestForm();
        std::string _target;
};

#endif