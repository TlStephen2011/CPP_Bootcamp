/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 22:52:46 by tstephen          #+#    #+#             */
/*   Updated: 2019/05/26 22:54:10 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iomanip>

enum command {
	ADD,
	SEARCH,
	EXIT,
	UNKNOWN
};

static std::string showMenu()
{
	std::cout << "Enter a command (ADD, SEARCH or EXIT): " << std::endl;
	std::string command;
	getline(std::cin, command, '\n');
	return command;
}

static command hashIt(std::string inString)
{
	if (inString == "ADD")
		return ADD;
	else if (inString == "SEARCH")
		return SEARCH;
	else if (inString == "EXIT")
		return EXIT;
	else
		return UNKNOWN;
}

static Contact doAdd()
{
	Contact newContact;
	std::string input;

	std::cout << "Enter contacts first name" << std::endl;
	getline(std::cin, input, '\n');
	newContact.setFirstName(input);
	std::cout << "Enter last name" << std::endl;
	getline(std::cin, input, '\n');
	newContact.setLastName(input);
	std::cout << "Enter contacts nickname" << std::endl;
	getline(std::cin, input, '\n');
	newContact.setNickName(input);
	std::cout << "Enter contacts login" << std::endl;
	getline(std::cin, input, '\n');
	newContact.setLogin(input);
	std::cout << "Enter contacts postal address" << std::endl;
	getline(std::cin, input, '\n');
	newContact.setPostalAddress(input);
	std::cout << "Enter contacts email address" << std::endl;
	getline(std::cin, input, '\n');
	newContact.setEmailAddress(input);
	std::cout << "Enter contacts phone number" << std::endl;
	getline(std::cin, input, '\n');
	newContact.setPhoneNumber(input);
	std::cout << "Enter contacts birthday date" << std::endl;
	getline(std::cin, input, '\n');
	newContact.setBirthdayDate(input);
	std::cout << "Enter contacts favorite meal" << std::endl;
	getline(std::cin, input, '\n');
	newContact.setFavoriteMeal(input);
	std::cout << "Enter contacts underwear color" << std::endl;
	getline(std::cin, input, '\n');
	newContact.setUnderwearColor(input);
	std::cout << "Enter contacts darkest secret" << std::endl;
	getline(std::cin, input, '\n');
	newContact.setDarkestSecret(input);

	return newContact;
}

static void conditionalDisplay(std::string field)
{
	if (field.length() <= FIELD_WIDTH)
	{
		std::cout << field;
	}
	else
	{
		char result[FIELD_WIDTH];
		for (int i = 0; i < FIELD_WIDTH; i++)
		{
			if (i == FIELD_WIDTH - 1)
			{
				result[i] = '.';
			}
			else
			{
				result[i] = field[i];
			}
		}
		std::cout << result;
	}
	
	
}

static void displayPhoneBook(Contact phonebook[], int contactsIndex)
{
	std::cout << std::setw(10) << "Index" << "|" \
	<< std::setw(FIELD_WIDTH) << "First Name" << "|" << std::setw(FIELD_WIDTH) \
	<< "Last Name" << "|" << std::setw(FIELD_WIDTH) << "Nickname" << std::endl;

	for (int i = 0; i < contactsIndex; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10); 
		conditionalDisplay(phonebook[i].getFirstName());
		std::cout << "|";
		std::cout << std::setw(10);
		conditionalDisplay(phonebook[i].getLastName());
		std::cout << "|";
		std::cout << std::setw(10);
		conditionalDisplay(phonebook[i].getNickName());
		std::cout << "|";
		std::cout << std::endl;
	}
}

static void doSearch(Contact phonebook[], int numContacts)
{
	displayPhoneBook(phonebook, numContacts);
	std::cout << "SEARCHING..." << std::endl;
}


int		main(void)
{

	Contact phonebook[MAX_CONTACTS];
	int numContacts = 0;
	while (true)
	{
		std::string command = showMenu();
		switch (hashIt(command))
		{
		case ADD:
			if (numContacts == MAX_CONTACTS - 1)
			{
				std::cout << "Phonebook limit reached. Try another command" << std::endl;
				break;
			}
			phonebook[numContacts++] = doAdd();
			break;
		case SEARCH:
			doSearch(phonebook, numContacts);
			break;
		case EXIT:
			return 0;		
		default:
			std::cout << "You have entered an invalid command. Please try again." << std::endl;
			break;
		}
	}

	return 0;
}