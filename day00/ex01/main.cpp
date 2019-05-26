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

int		main(void)
{

	Contact newContact;

	newContact.setFirstName("Tyrone");
	std::cout << "NEW CONTACT NAME " << newContact.getFirstName() << std::endl;

	return 0;
}