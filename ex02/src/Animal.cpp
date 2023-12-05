/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:25 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 17:12:13 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Animal::Animal()
{
	std::cout << "Animal has been created." << std::endl;
}

Animal::Animal( const Animal &copy )
{
	*this = copy;
}

Animal& Animal::operator=( const Animal &src )
{
	// if (*this != src)
	// {
		
	// }
	(void)src; //
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal has been destructed." << std::endl;
}


// ###############################
// #      FONCTION  MEMBRE       #
// ###############################

void Animal::makeSound( void ) const
{
	std::cout << "*animal sound*" << std::endl;
}


// ##############################
// #         ACCESSEUR          #
// ##############################

std::string	Animal::getType( void ) const
{
	return type;
}
