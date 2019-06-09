/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenis <egenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:41:15 by egenis            #+#    #+#             */
/*   Updated: 2019/06/08 16:12:34 by egenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ncurses.h>
#include "Game.hpp"

int main(void) {

    

    // Setup ncurses.
    initscr();
    // cbreak();
    noecho();
    curs_set(0);
    srand(time(NULL));
    // Make new window.
    WINDOW * win = newwin(WINDOW_ROWS, WINDOW_COLS, 0, 0);
    wtimeout(win, 100);
    keypad(win, true);

    Game *game = new Game(win);

    // move(WINDOW_ROWS / 2, 0);

    // printw(">");
    // wrefresh(win);
    // getch();

    game->render();

    while (true) {
        
        game->setInput();

        if (!game->update()) {
            
            break;
        }
        
        game->render();
    }

    endwin();
    return 0;
}