/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <egenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:53:15 by egenis            #+#    #+#             */
/*   Updated: 2019/06/08 15:26:12 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class Character {

    public:
        Character();
        ~Character();
        Character& operator=(Character const &);
        Character(Character const &);
        Character(int, int);
        
        int getRow();
        int getCol();

        // Enemy not matching virtual signature?

    protected:
        int row;
        int col;
};

#endif