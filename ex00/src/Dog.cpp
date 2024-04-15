/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:10:58 by hemottu           #+#    #+#             */
/*   Updated: 2024/04/15 16:53:40 by hemottu          ###   ########.fr       */
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
	std::cout << BLUE << DIM << "Dog has been created." << RESET <<  std::endl;
}

Dog::Dog( const Dog &copy ) : Animal(copy)
{
	*this = copy;
	std::cout << BLUE << DIM << "Dog copy has been created." << RESET <<  std::endl;
}

Dog& Dog::operator=( const Dog &src)
{
	this->setType(src.m_type);
	return *this;
}

Dog::~Dog()
{
	std::cout << BLUE << DIM << "Dog has been destructed." << RESET << std::endl;
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
	std::cout << "*woof woof*" << std::endl;
}