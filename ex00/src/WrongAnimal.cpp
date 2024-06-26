/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:23:39 by hemottu           #+#    #+#             */
/*   Updated: 2024/04/15 16:46:20 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

WrongAnimal::WrongAnimal()
{
	std::cout << RED << DIM << "WrongAnimal has been created." << RESET << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy )
{
    *this = copy;
	std::cout << RED << DIM << "WrongAnimal copy has been created." << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &src)
{
    this->setType(src.m_type);
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << DIM << "WrongAnimal has been destructed." << RESET << std::endl;
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
	std::cout << "*wrong animal sound*" << std::endl;
}