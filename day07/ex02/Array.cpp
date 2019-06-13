/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 01:13:32 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/14 01:42:00 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>

template <typename T>
Array<T>::Array()
{
    this->_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int size)
{
    this->_size = size;
    this->_arr_ptr = ::new T[size];
}

template <typename T>
Array<T>::Array(Array<T> const &copy)
{
    this->_size = copy.getSize();
    this->_arr_ptr = ::new T[this->_size];
    for (int i = 0; i < this->_size; i++)
    {
        this->_arr_ptr[i] = copy[i];
    }
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
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

template <typename T>
void* Array<T>::operator new(size_t size)
{
    return ::new T[size];
}

template <typename T>
T& Array<T>::operator[](int index)
{
    if (index >= this->_size || index < 0)
    {
        throw Array<T>::OutOfBoundsException();
    }
    return static_cast<T&>(this->_arr_ptr)[index];
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw() 
{
    return "Array index is out of bounds.";
}

template <typename T>
Array<T>::~Array()
{
    if (this->_arr_ptr)
        delete this->_arr_ptr;
    this->_arr_ptr = NULL;
    this->_size = 0;
}