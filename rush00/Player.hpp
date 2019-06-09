/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <egenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:56:32 by egenis            #+#    #+#             */
/*   Updated: 2019/06/08 16:05:41 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP

# define MAX_PROJECTILES 1000
# include "Character.hpp"
# include "Projectile.hpp"

class Player : public Character {

    public:
        Player();
        ~Player();
        Player(int, int);
        Player& operator=(Player const &);
        Player(Player const &);
        void deleteDeadProjectiles();
        void move(int);
        Projectile** getProjectiles();
        bool* getAliveProjectiles();

    private:
        Projectile *projectiles[MAX_PROJECTILES];
        bool isProjectileActive[MAX_PROJECTILES];
        
};

#endif