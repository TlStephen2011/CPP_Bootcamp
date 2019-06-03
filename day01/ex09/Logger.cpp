/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 20:42:52 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/03 20:42:52 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string &filename)
{
    this->logFileName = filename.c_str();
    return;
}

Logger::~Logger()
{
    return;
}

std::string Logger::makeLogEntry(std::string message)
{
    time_t now = time(0);
    char* dt = ctime(&now);

    if (!dt)
    {
        return "[No system time available]" + message;
    }

    std::string normalizedDate(dt);
  
    if (!normalizedDate.empty() && normalizedDate[normalizedDate.length() - 1] == '\n')
    {
        normalizedDate = normalizedDate.substr(0, normalizedDate.length() - 1);
    }
    
    return "[" + normalizedDate + "] " + message;
}

void Logger::logToConsole(std::string message)
{
    std::cout << this->makeLogEntry(message) << std::endl;
}

void Logger::logToFile(std::string message)
{
    std::ofstream ofs(this->logFileName, std::ios_base::app);
    ofs << this->makeLogEntry(message) << std::endl;
    ofs.close();
}

void Logger::log(std::string const &dest, std::string const &message)
{
    typedef void (Logger::*logTo)(std::string);
    logTo arr[] = {
        &Logger::logToConsole,
        &Logger::logToFile
    };

    std::string ofs[] = {
        "console",
        "file"
    };

    for (int i = 0; i < 2; i++)
    {
        if (ofs[i].compare(dest) == 0)
        {
            (this->*arr[i])(message);
            return;
        }
    }
    std::cout << "Invalid destination given" << std::endl;
}