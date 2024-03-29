/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 22:45:44 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/15 13:05:27 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(SPAN_HPP)
#define SPAN_HPP
#include <vector>
#include <iterator>

class Span
{
    public:
        class ContainerFullException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class SpanCalcException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        Span(unsigned int);
        ~Span();
        Span(Span const&);
        Span& operator=(Span const&);
        void addNumber(int);
        std::vector<int>* getContainer() const;
        unsigned int getSize() const;
        long shortestSpan() const;
        long longestSpan() const;
        void addNumber(std::vector<int>::const_iterator, std::vector<int>::const_iterator);
        void display() const;

    private:
        Span();
        std::vector<int> *_container;
        unsigned int _max_size;
        unsigned int _current_size;

};

#endif // SPAN_HPP
