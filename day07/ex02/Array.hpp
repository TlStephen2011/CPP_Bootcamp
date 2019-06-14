/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 00:58:47 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/14 12:24:33 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <string>

template <typename T>
class Array
{
    public:

        class OutOfBoundsException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Array index is out of bounds.";
                }
        };

        Array()
        {
            this->_size = 0;
            this->_arr_ptr = NULL;
        }
        
        Array(unsigned int size)
        {
            this->_size = size;
            this->_arr_ptr = ::new T[size];
        }
        
        Array(Array const &copy)
        {
            this->_size = copy.getSize();
            this->_arr_ptr = ::new T[this->_size];
            for (int i = 0; i < this->_size; i++)
            {
                this->_arr_ptr[i] = copy[i];
            }
        }
        
        ~Array()
        {
            if (this->_arr_ptr)
                delete this->_arr_ptr;
            this->_arr_ptr = NULL;
            this->_size = 0;
        }
        
        Array& operator=(Array const &rhs)
        {
            if (this->_arr_ptr)
                delete this->_arr_ptr;
            this->_size = 0;

            this->_size = rhs.getSize();
            this->_arr_ptr = ::new T[this->_size];
            for (int i = 0; i < this->_size; i++)
            {
                this->_arr_ptr[i] = rhs[i];
            }
        }

        int getSize() const
        {
            return this->_size;
        }

        T& operator[](int index) const
        {
            if (index >= this->_size || index < 0)
            {
                throw Array<T>::OutOfBoundsException();
            }
            return this->_arr_ptr[index];
        }
        
    private:
        int _size;
        T* _arr_ptr;
};

#endif