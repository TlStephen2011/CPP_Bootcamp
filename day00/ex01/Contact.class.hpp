/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 22:31:16 by tstephen          #+#    #+#             */
/*   Updated: 2019/05/26 22:44:09 by tstephen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <string>
# include <iostream>
# include <iomanip>

const int MAX_CONTACTS = 8;
const int FIELD_WIDTH = 10;

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void setFirstName(std::string);
		void setLastName(std::string);
		void setNickName(std::string);
		void setLogin(std::string);
		void setPostalAddress(std::string);
		void setEmailAddress(std::string);
		void setPhoneNumber(std::string);
		void setBirthdayDate(std::string);
		void setFavoriteMeal(std::string);
		void setUnderwearColor(std::string);
		void setDarkestSecret(std::string);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getLogin(void);
		std::string getPostalAddress(void);
		std::string getEmailAddress(void);
		std::string getPhoneNumber(void);
		std::string getBirthdayDate(void);
		std::string getFavoriteMeal(void);
		std::string getUnderwearColor(void);
		std::string getDarkestSecret(void);
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _login;
		std::string _postalAddress;
		std::string _emailAddress;
		std::string _phoneNumber;
		std::string _birthdayDate;
		std::string _favoriteMeal;
		std::string _underwearColor;
		std::string _darkestSecret;
};

#endif