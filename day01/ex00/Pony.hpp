/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 17:06:29 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/02 17:06:29 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>

class Pony
{
    public:
        Pony();
        ~Pony();
        void setAge(int);
        int getAge();
        void setName(std::string);
        std::string getName();
    private:
        std::string _name;
        int _age;
};

#endif