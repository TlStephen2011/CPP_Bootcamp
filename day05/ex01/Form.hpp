/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 02:23:26 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/11 03:13:38 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <exception>
# include <string>
# include "Bureaucrat.hpp"

class Form
{
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        Form(std::string, int, int);
        ~Form();
        Form(Form const&);
        Form& operator=(Form const&);
        std::string getName() const;
        int getMinGradeToSign() const;
        int getMinGradeToExecute() const;
        bool getFormSignedState() const;
        void beSigned(Bureaucrat const&);

    private:
        Form();
        std::string const _name;
        int const _minGradeToSign;
        int const _minGradeToExecute;
        bool _isSigned; 
        
};

std::ostream& operator<<(std::ostream&, Form const&);

#endif