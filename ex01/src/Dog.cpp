/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:10:58 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/11 16:01:20 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "color.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Dog::Dog() : Animal()
{
	m_type = "Dog";
	m_brain = new Brain;
	std::cout << color::BLUE << color::DIM << "Dog has been created." << color::RESET <<  std::endl;
}

Dog::Dog( const Dog &copy ) : Animal(copy)
{
	*this = copy;
	m_brain = new Brain(*copy.m_brain);
	std::cout << color::BLUE << color::DIM << "Dog copy has been created." << color::RESET <<  std::endl;
}

Dog& Dog::operator=( const Dog &src)
{
	this->setType(src.m_type);
	return *this;
}

Dog::~Dog()
{
	delete m_brain;
	std::cout << color::BLUE << color::DIM << "Dog has been destructed." << color::RESET << std::endl;
}

// ##############################
// #    MUTATEUR & ACCESSEURS   #
// ##############################

std::string	Dog::getType( void ) const
{
	return (this->m_type);
}

void Dog::setType( std::string type )
{
	this->m_type = type;
}

Brain* Dog::getBrain() const
{
	return (this->m_brain);
}

// ###############################
// #       FONCTION MEMBRE       #
// ###############################

void Dog::makeSound( void ) const
{
	std::cout << "*woof woof*" << std::endl;
}