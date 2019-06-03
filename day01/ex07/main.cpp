/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:27:10 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/03 15:29:56 by tstephen         ###   ########.fr       */
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
  std::ifstream file(path);
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
    std::ofstream ofs(filename + ".replace", std::ios::out);
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
        std::string content = getFileContent(argv[1]);
        searchAndReplace(content, argv[2], argv[3]);
        writeToFile(argv[1], content);
    }
    else
    {
        std::cout << "One or more of the arguments entered is invalid" << std::endl; 
        return 0;    
    }
}