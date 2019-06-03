/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 20:42:51 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/03 20:42:51 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP
# include <string>
# include <ctime>
# include <iostream>
# include <fstream>

class Logger
{
    public:
        Logger(std::string&);
        ~Logger();
        void log(std::string const&, std::string const&);
        
    private:
        void logToConsole(std::string);
        void logToFile(std::string);
        std::string makeLogEntry(std::string);  
        const char *logFileName;
        Logger();
};

#endif