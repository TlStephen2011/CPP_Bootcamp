/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:50:30 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/13 16:52:15 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP
# include "Base.hpp"

class B : public Base
{
    public:
        B();
        virtual ~B();
        B(B const&);
        B& operator=(B const&);

    private:
    
};

#endif