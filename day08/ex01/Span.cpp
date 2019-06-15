/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 22:53:48 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/15 13:12:07 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <algorithm>
#include <iostream>

Span::Span()
{
    return;
}

Span::~Span()
{
    delete this->_container;
}

Span::Span(unsigned int n)
{
    this->_container = new std::vector<int>(n);
    this->_max_size = n;
    this->_current_size = 0;
}

Span::Span(Span const &copy)
{
    this->_max_size = copy.getSize();
    this->_container = new std::vector<int>(copy.getSize());
    
    std::vector<int> *container = copy.getContainer();

    for(unsigned int i = 0; i < this->_max_size; i++)
    {
        this->_container[i] = container[i];
    }
}

Span& Span::operator=(Span const &rhs)
{
    delete this->_container;
    this->_max_size = rhs.getSize();
    this->_container = new std::vector<int>(rhs.getSize());
    
    std::vector<int> *container = rhs.getContainer();

    for(unsigned int i = 0; i < this->_max_size; i++)
    {
        this->_container[i] = container[i];
    }
    return *this;
}

std::vector<int> *Span::getContainer() const
{
    return this->_container;
}

unsigned int Span::getSize() const
{
    return this->_max_size;
}

void Span::addNumber(int n)
{
    if (this->_current_size == this->_max_size)
    {
        throw Span::ContainerFullException();
    }
    
    std::vector<int>& vecRef = *(this->_container);
    vecRef[this->_current_size++] = n;
}

long Span::shortestSpan() const
{
    if (this->_current_size == 0 || this->_current_size == 1)
    {
        throw Span::SpanCalcException();
    }

    std::vector<int> v = *(this->_container);
    std::sort(v.begin(), v.end());
    std::vector<int>::const_iterator itr;
    long shortestSpan = __LONG_MAX__;

    for (itr = v.begin(); itr != v.end(); itr++)
    {
        if (itr + 1 != v.end())
        {
            std::vector<int>::const_iterator itrNext = itr + 1;
            if (*itrNext - *itr < shortestSpan)
            {
                shortestSpan = *itrNext - *itr;
            }
        }
    }
    return shortestSpan;
}

long Span::longestSpan() const
{
    if (this->_current_size == 0 || this->_current_size == 1)
    {
        throw Span::SpanCalcException();
    }

    int min = *std::min_element(this->_container->begin(), this->_container->end());
    int max = *std::max_element(this->_container->begin(), this->_container->end());

    return max - min;
}

const char* Span::ContainerFullException::what() const throw()
{
    return "Container is full. No more numbers can be added.";
}

const char* Span::SpanCalcException::what() const throw()
{
    return "Container does not contain enough data to perform span calculation.";
}

void Span::addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
    int numbersToInsert = std::distance(begin, end);
    if (numbersToInsert - this->_current_size > this->_max_size)
    {
        throw Span::ContainerFullException();
    }

    std::vector<int>::iterator itr = this->_container->begin();
    itr += this->_current_size;

    std::copy(begin, end, itr);
    this->_current_size += numbersToInsert;
}

void Span::display() const
{
    std::vector<int>::const_iterator itr;

    for (itr = this->_container->begin(); itr != this->_container->end(); itr++)
    {
        std::cout << *itr << "   ";
    }
    std::cout << std::endl;
}