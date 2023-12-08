/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:09:35 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 12:27:06 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Cat::Cat() : Animal()
{
	m_type = "Cat";
	std::cout << GREEN << "Cat has been created." << RESET << std::endl;
}

Cat::Cat( const Cat &copy ) : Animal(copy)
{
	*this = copy;
	std::cout << GREEN << "Cat copy has been created." << RESET << std::endl;
}

Cat& Cat::operator=( const Cat &src )
{
	m_type = src.m_type;
	return *this;
}

Cat::~Cat()
{
	std::cout << GREEN << "Cat has been destructed." << RESET << std::endl;
}


// ##############################
// #    MUTATEUR & ACCESSEUR    #
// ##############################

void Cat::setType( std::string type ) 
{
	this->m_type = type;
}

std::string	Cat::getType( void ) const
{
	return (this->m_type);
}


// ###############################
// #       FONCTION MEMBRE       #
// ###############################

void Cat::makeSound( void ) const
{
	std::cout << GREEN << "*meeeeeeow*" << RESET << std::endl;
}
