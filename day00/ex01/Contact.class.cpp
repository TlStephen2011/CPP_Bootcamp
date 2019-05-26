/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 22:43:24 by tstephen          #+#    #+#             */
/*   Updated: 2019/05/26 22:49:53 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

void Contact::setFirstName(std::string val)
{
	this->_firstName = val;
}

void Contact::setLastName(std::string val)
{
	this->_lastName = val;
}

void Contact::setNickName(std::string val)
{
	this->_nickName = val;
}

void Contact::setLogin(std::string val)
{
	this->_login = val;
}

void Contact::setPostalAddress(std::string val)
{
	this->_postalAddress = val;
}

void Contact::setEmailAddress(std::string val)
{
	this->_emailAddress = val;
}

void Contact::setPhoneNumber(std::string val)
{
	this->_phoneNumber = val;
}

void Contact::setBirthdayDate(std::string val)
{
	this->_birthdayDate = val;
}

void Contact::setFavoriteMeal(std::string val)
{
	this->_favoriteMeal = val;
}

void Contact::setUnderwearColor(std::string val)
{
	this->_underwearColor = val;
}

void Contact::setDarkestSecret(std::string val)
{
	this->_darkestSecret = val;
}

std::string Contact::getFirstName(void)
{
	return this->_firstName;	
}

std::string Contact::getLastName(void)
{
	return this->_lastName;
}

std::string Contact::getNickName(void)
{
	return this->_nickName;
}

std::string Contact::getLogin(void)
{
	return this->_login;
}

std::string Contact::getPostalAddress(void)
{
	return this->_postalAddress;
}

std::string Contact::getEmailAddress(void)
{
	return this->_emailAddress;
}

std::string Contact::getPhoneNumber(void)
{
	return this->_phoneNumber;
}

std::string Contact::getBirthdayDate(void)
{
	return this->_birthdayDate;
}

std::string Contact::getFavoriteMeal(void)
{
	return this->_favoriteMeal;
}

std::string Contact::getUnderwearColor(void)
{
	return this->_underwearColor;
}

std::string Contact::getDarkestSecret(void)
{
	return this->_darkestSecret;
}
