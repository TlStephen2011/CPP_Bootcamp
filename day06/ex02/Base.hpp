/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:43:36 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/13 16:49:31 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
    public:
        Base();
        virtual ~Base();
        Base(Base const&);
        Base& operator=(Base const&);

    private:
    
};

#endif