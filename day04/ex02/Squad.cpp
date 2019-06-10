/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:32:35 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/10 18:30:32 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include <stdlib.h>

Squad::Squad()
{
    //TODO: check instanciation criteria
    this->_marines = NULL;
    this->_numUnits = 0;
    return;
}

Squad::~Squad()
{
    t_container *node = this->_marines;

    for (int i = 0; i < this->_numUnits; i++)
    {
        t_container *next = node->next;
        delete node->_unit;
        delete node;
        if (!next)
        {
            this->_marines = NULL;
            return;
        }
        node = next;
    }
    return;
}

int Squad::getCount() const
{
    return this->_numUnits;
}

ISpaceMarine* Squad::getUnit(int N) const
{
    t_container* head = this->_marines;

    for (int i = 0; i < N; i++)
    {
        if (!(head->next))
        {
            return NULL;
        }
        head = head->next;
    }

    return head->_unit;
}

int Squad::push(ISpaceMarine *unit)
{
    if (!unit)
    {
        return -1;
    }
    
    t_container *node = this->_marines;

    if (!node)
    {
        this->_marines = new t_container();
        this->_marines->_unit = unit;
        this->_marines->next = NULL;
        this->_numUnits++;
        return this->_numUnits;
    }

    for (int i = 0; i < this->_numUnits; i++)
    {
        if (!(node->next))
        {
            break;
        }
    }

    node->next = new t_container();
    node->next->_unit = unit;
    node->next->next = NULL;
    return ++this->_numUnits;
}

Squad::Squad(Squad const &copy)
{
    int numUnits = copy.getCount();

    if (numUnits <= 0)
    {
        return;
    }

    for (int i = 0; i < numUnits; i++)
    {
        ISpaceMarine *temp = copy.getUnit(i);
        if (!temp)
        {
            return;
        }
        this->push(temp->clone());
    }
}

Squad& Squad::operator=(Squad const &rhs)
{
    t_container *node = this->_marines;

    for (int i = 0; i < this->_numUnits; i++)
    {
        t_container *next = node->next;
        delete node->_unit;
        delete node;
        if (!next)
        {
            this->_marines = NULL;
            return *this;
        }
        node = next;
    }

    int numUnits = rhs.getCount();

    if (numUnits <= 0)
    {
        return *this;
    }

    for (int i = 0; i < numUnits; i++)
    {
        ISpaceMarine *temp = rhs.getUnit(i);
        if (!temp)
        {
            break;
        }
        this->push(temp->clone());
    }
    return *this;
}