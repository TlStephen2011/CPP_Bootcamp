/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:51:29 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/09 22:51:29 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>

class Enemy
{
    public:        
        Enemy(int hp, std::string const &type);
        virtual ~Enemy();
        int getHP() const;
        Enemy(Enemy const&);
        Enemy& operator=(Enemy const&);
        std::string virtual getType() const;
        virtual void takeDamage(int);

    private:
        Enemy();                
        int _hp;
        std::string _type;

};

#endif