/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <egenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:46:27 by egenis            #+#    #+#             */
/*   Updated: 2019/06/08 15:48:15 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
# define GAME_HPP

# define MAX_PROJECTILES 1000
# define MAX_ENEMY 100
# define WINDOW_ROWS 30
# define WINDOW_COLS 100
# define PLAYER_CHAR '>'
# define ENEMY_CHAR 'S'
# define PROJECTILE_CHAR '-'
# include "Enemy.hpp"
# include <curses.h>
# include <cstdlib>
# include <string>
# include "Player.hpp"

class Game {

    public:

        Game(void);
        ~Game(void);
        Game& operator=(Game const&);
        Game(Game const &);
        Game(WINDOW *);

        int getInput();
        void setInput();
        bool update();
        void render();
        void renderEnemies();
        
    private:

        Player *ship;
        Enemy *enemies[MAX_ENEMY];
        bool isEnemyAlive[MAX_ENEMY];
        WINDOW *win;
        void spawnEnemies();
        int input;
        void logInfo();
        void logInfo(Projectile**, bool[]);
        const std::string currentDateTime();
        void deleteInvalidEnemies();
        void deleteDeadEnemies();
        bool hasCollided();
};

#endif