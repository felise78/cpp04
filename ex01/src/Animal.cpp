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
#include "Brain.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Animal::Animal()
{
	std::cout << RED << "Animal has been created." << RESET << std::endl;
}

Animal::Animal( const Animal &copy )
{
	*this = copy;
}

Animal& Animal::operator=( const Animal &src )
{
	if(this != &src)
		type = src.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << RED << "Animal has been destructed." << RESET << std::endl;
}


// ###############################
// #      FONCTION  MEMBRE       #
// ###############################

void Animal::makeSound( void ) const
{
	std::cout << RED << "*animal sound*" << RESET << std::endl;
}


// ##############################
// #         ACCESSEUR          #
// ##############################

std::string	Animal::getType( void ) const
{
	return this->type;
}
