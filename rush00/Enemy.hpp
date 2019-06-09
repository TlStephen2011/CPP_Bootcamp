/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <egenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:17:46 by egenis            #+#    #+#             */
/*   Updated: 2019/06/08 15:24:16 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "Character.hpp"

class Enemy : public Character {

    public:
        Enemy();
        ~Enemy();
        Enemy& operator=(Enemy const &);
        Enemy(Enemy *[], bool []);
        Enemy(Enemy const &);

        void move();
        
    private:
        // TODO: Add stuff?
};

#endif