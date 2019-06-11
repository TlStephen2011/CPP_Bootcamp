/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 19:01:07 by tstephen          #+#    #+#             */
/*   Updated: 2019/06/11 19:25:33 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <string>
#include <math.h>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() :
    Form("N/A", "ShrubberyCreationForm", 145, 137)
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
    Form(target, "ShrubberyCreationForm", 145, 137)
{
    return;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    (void)rhs;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    try
    {
        this->canExecute(executor);
        std::ofstream file;
        
        std::string shrubs = this->getTarget() + "_shrubbery";

        file.open(shrubs.c_str(), std::ios::trunc);
        this->drawTrees(file, rand() % 10 + 5);
        this->drawTrees(file, rand() % 10 + 5);
        this->drawTrees(file, rand() % 10 + 5);
        this->drawTrees(file, rand() % 10 + 5);
        this->drawTrees(file, rand() % 10 + 5);
        file.close();        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void ShrubberyCreationForm::drawTrees(std::ofstream &file, int treeLength) const
{
    int stars = 1;

	//size is all you need to change, to automatically
	//change the size of the stump

	//size of tree in height
	int size = treeLength;

	int stumpHeight = size / 3;
	int stumpWidth = size / 2;

	for( int total = size; total > 0; --total )
	{
		//control the amount of spaces
		for( int i = ( total - 1 ); i > 0; --i )
			file << " ";

		//control the amount of stars
		for( int j = 0; j < stars ; ++j )
			file << "*";

		//next row needs 2 extra stars
		stars += 2;

		file << '\n';
	}


	//create the stump
	for( int i = 0; i < stumpHeight; ++i )
	{
		//spaces to the center of the tree
		//so that the stump is centered
		for( int j = 0; j < ( size - ( stumpWidth - ( stumpWidth / 2 ) ) ); ++j )
			file << " ";

		for( int k = 0; k < stumpWidth; ++k )
		    file << "*";

		file << '\n';
	}
    file << '\n';
}