/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:25 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/10 16:57:21 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Animal::Animal() : m_type("Animal")
{
	std::cout << color::RED << color::DIM << "Animal has been created." << color::RESET << std::endl;
}

Animal::Animal( const Animal &copy )
{
	*this = copy;
	std::cout << color::RED << color::DIM << "Animal copy has been created." << color::RESET << std::endl;
}

Animal& Animal::operator=( const Animal &src )
{
	this->setType(src.m_type);
	return *this;
}

Animal::~Animal()
{
	std::cout << color::RED << color::DIM << "Animal has been destructed." << color::RESET << std::endl;
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
	std::cout << "default sound" << std::endl;
}

