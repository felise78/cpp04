/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:10:58 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/09 16:18:27 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Dog::Dog() : Animal()
{
	m_type = "Dog";
	std::cout << BLUE << "Dog has been created." << RESET <<  std::endl;
}

Dog::Dog( const Dog &copy ) : Animal(copy)
{
	if (this != &copy)
	{
		*this = copy;
		std::cout << BLUE << "Dog copy has been created." << RESET <<  std::endl;
	}
}

Dog& Dog::operator=( const Dog &src)
{
	this->m_type = src.m_type;
	return *this;
}

Dog::~Dog()
{
	std::cout << BLUE << "Dog has been destructed." << RESET << std::endl;
}

// ##############################
// #    MUTATEUR & ACCESSEUR    #
// ##############################

std::string	Dog::getType( void ) const
{
	return (this->m_type);
}

void	Dog::setType( std::string type )
{
	this->m_type = type;
}

// ###############################
// #       FONCTION MEMBRE       #
// ###############################

void Dog::makeSound( void ) const
{
	std::cout << BLUE << "*woof woof*" << RESET << std::endl;
}