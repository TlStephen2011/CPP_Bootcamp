/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 01:12:55 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/15 16:08:44 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(MUTANTSTACK_HPP)
#define MUTANTSTACK_HPP
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
    private:
        std::stack<T> _stack;
    
    public:
        MutantStack(/* args */) {}
        //Not sure why std::stack<T> does not have a virtual destructor!!!
        ~MutantStack() {}
        
        typedef typename std::list<T>::iterator iterator;

        iterator begin()
        {
            return this->_stack.begin();
        }

        iterator end()
        {
            return this->_stack.end();
        }


        
};

#endif // MUTANTSTACK_HPP
