/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:23:39 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/09 16:23:41 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

WrongAnimal::WrongAnimal()
{
	std::cout << RED << "WrongAnimal has been created." << RESET << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy )
{
	if (this != &copy)
	{
    	*this = copy;
		std::cout << RED << "WrongAnimal copy has been created." << RESET << std::endl;
	}
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &src)
{
    this->m_type = src.m_type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal has been destructed." << RESET << std::endl;
}



// ##############################
// #    MUTATEUR & ACCESSEUR    #
// ##############################

std::string	WrongAnimal::getType( void ) const
{
	return (this->m_type);
}

void	WrongAnimal::setType( std::string type )
{
	this->m_type = type;
}

// ###############################
// #       FONCTION MEMBRE       #
// ###############################

void WrongAnimal::makeSound( void ) const
{
	std::cout << RED << "*wrong animal sound*" << RESET << std::endl;
}