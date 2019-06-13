/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:50:08 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/13 16:52:04 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP
# include "Base.hpp"

class A : public Base
{
    public:
        A();
        virtual ~A();
        A(A const&);
        A& operator=(A const&);

    private:
    
};

#endif