/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 20:42:49 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/03 20:42:49 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main()
{
    std::string fileName = "test.log";
    Logger *log = new Logger(fileName);

    log->log("console", "This is some warning about what you are doing.");
    log->log("file", "This machine is not secure. Format!");
    log->log("Unkown", "What are you doing?");

    delete log;
    return 0;
}