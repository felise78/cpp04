/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AANIMAL.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:25 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/11 16:50:14 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "color.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

AAnimal::AAnimal() : m_type("AAnimal")
{
	std::cout << RED << DIM << "AAnimal has been created." << RESET << std::endl;
}

AAnimal::AAnimal( const AAnimal &copy )
{
	*this = copy;
	std::cout << RED << DIM << "AAnimal copy has been created." << RESET << std::endl;
}

AAnimal& AAnimal::operator=( const AAnimal &src )
{
	this->setType(src.m_type);
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << RED << DIM << "AAnimal has been destructed." << RESET << std::endl;
}

// ###############################
// #    SURCHAGE D'OPERATEUR     #
// ###############################

std::ostream&	operator<<(std::ostream& os, const AAnimal& animal)
{
	os << animal.getType();
	return (os);
}

// ##############################
// #    MUTATEUR & ACCESSEUR    #
// ##############################

void AAnimal::setType( std::string type)
{
	this->m_type = type;
}

std::string	AAnimal::getType( void ) const
{
	return (this->m_type);
}

// ###############################
// #       FONCTION MEMBRE       #
// ###############################

void AAnimal::makeSound( void ) const
{
	std::cout << "default sound" << std::endl;
}

