/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 22:16:28 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/02 22:16:28 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <sstream>

class Brain
{
    public:
        Brain();
        ~Brain();
        std::string identify();
        void setAddress();
        std::string getAddress();
    private:
        std::string _address;
};

#endif