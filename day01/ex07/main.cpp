/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:27:10 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/04 13:47:16 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void searchAndReplace(std::string& str,
               const std::string& oldStr,
               const std::string& newStr)
{
    //basically size_t
    std::string::size_type pos = 0u;
    while((pos = str.find(oldStr, pos)) != std::string::npos){
        str.replace(pos, oldStr.length(), newStr);
        pos += newStr.length();
    }
}

static std::string getFileContent(const std::string& path)
{
    std::ifstream file(path, std::ios_base::in);
    if (!file || file.fail())
    {
        throw std::ios::failure( "Error opening input file! File: " + path);
    }
    
    std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

    return content;
}

static bool validateArguments(char *argv[])
{
    if (strlen(argv[1]) == 0 || strlen(argv[2]) == 0 || strlen(argv[3]) == 0)
    {
        std::cout << "Invalid arguments provided" << std::endl;
        return false;
    }

    return true;
}

static void writeToFile(std::string filename, std::string content)
{
    
    std::ofstream ofs(filename + ".replace", std::ios_base::out);

    if (!ofs || ofs.fail())
    {
        throw std::ios::failure( "Error opening file! File: " + filename);
    }

    ofs << content;
    return;
}

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        std::cout << "Incorrect arguments provided" << std::endl;
        return 0;
    }

    if (validateArguments(argv) == true)
    {   
        std::string content;
        try
        {
            content = getFileContent(argv[1]);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            return 0;
        }

        searchAndReplace(content, argv[2], argv[3]);

        try
        {
            writeToFile(argv[1], content);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            return 0;
        }
    }
    else
    {
        std::cout << "One or more of the arguments entered is invalid" << std::endl; 
        return 0;    
    }
}