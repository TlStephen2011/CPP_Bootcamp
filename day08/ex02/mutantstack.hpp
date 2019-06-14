/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 01:12:55 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/15 01:18:19 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(MUTANTSTACK_HPP)
#define MUTANTSTACK_HPP
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    private:
        /* data */
    
    public:
        MutantStack(/* args */) {}
        virtual ~MutantStack() {}
};

#endif // MUTANTSTACK_HPP
