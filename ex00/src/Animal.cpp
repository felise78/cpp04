/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:25 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 12:25:00 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Animal::Animal() : m_type("Animal")
{
	std::cout << RED << "Animal has been created." << RESET << std::endl;
}

Animal::Animal( const Animal &copy )
{
	*this = copy;
	std::cout << RED << "Animal copy has been created." << RESET << std::endl;
}

Animal& Animal::operator=( const Animal &src )
{
	this->m_type = src.m_type;
	return *this;
}

Animal::~Animal()
{
	std::cout << RED << "Animal has been destructed." << RESET << std::endl;
}


// ##############################
// #   CONSTRUCTEUR SURCHARGE   #
// ##############################

Animal::Animal(std::string type) : m_type(type)
{
	std::cout << RED << "Animal has been created." << RESET << std::endl;
}

// ##############################
// #    MUTATEUR & ACCESSEUR    #
// ##############################

void Animal::setType( std::string type)
{
	this->m_type = type;
}

std::string	Animal::getType( void ) const
{
	return (this->m_type);
}

// ###############################
// #       FONCTION MEMBRE       #
// ###############################

void Animal::makeSound( void ) const
{
	std::cout << RED << "*animal sound*" << RESET << std::endl;
}

