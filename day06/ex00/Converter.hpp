/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 13:59:03 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/13 15:39:53 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP
# include <string>
# include <exception>
# include <cstdlib>

class Converter
{
    public:
        class ImpossibleException : public std::exception
        {
            public:
                ImpossibleException();
                ~ImpossibleException() throw();
                ImpossibleException(ImpossibleException const&);
                ImpossibleException& operator=(ImpossibleException const&);
                virtual const char* what() const throw();
        };

        class NonDisplayableException : public std::exception
        {
            public:
                NonDisplayableException();
                ~NonDisplayableException() throw();
                NonDisplayableException(NonDisplayableException const&);
                NonDisplayableException& operator=(NonDisplayableException const&);
                virtual const char* what() const throw();
        };

        Converter(char const*);
        ~Converter();
        Converter(Converter const&);
        Converter& operator=(Converter const&);
        std::string toChar() const;
        std::string toInt() const;
        std::string toFloat() const;
        std::string toDouble() const;
        int getPrecision() const;
        
    private:
        void setPrecision();
        Converter();
        std::string _val;
        int _precision;
        float _floatVal;
        

};

#endif