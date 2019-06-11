/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 02:23:26 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/11 11:12:35 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <exception>
# include <string>

// Forward-declare Bureaucrat to prevent recursive inclusion
class Bureaucrat;

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

        class ExecuteOnUnsignedFormException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        Form(std::string, std::string, int, int);
        ~Form();
        Form(Form const&);
        Form& operator=(Form const&);
        std::string getName() const;
        int getMinGradeToSign() const;
        int getMinGradeToExecute() const;
        bool getFormSignedState() const;
        void beSigned(Bureaucrat const&);
        virtual void execute(Bureaucrat const&) const = 0;
        std::string getTarget() const;

    protected:
        bool canExecute(Bureaucrat const&) const;

    private:
        Form();
        std::string const _target;
        std::string const _name;
        int const _minGradeToSign;
        int const _minGradeToExecute;
        bool _isSigned; 
        
};

std::ostream& operator<<(std::ostream&, Form const&);

#endif