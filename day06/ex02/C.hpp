/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:50:43 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/13 16:52:31 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP
# include "Base.hpp"

class C : public Base
{
    public:
        C();
        virtual ~C();
        C(C const&);
        C& operator=(C const&);

    private:
    
};

#endif