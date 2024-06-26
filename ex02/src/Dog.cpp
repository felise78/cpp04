/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:10:58 by hemottu           #+#    #+#             */
/*   Updated: 2024/04/15 16:54:50 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "color.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Dog::Dog() : AAnimal()
{
	m_type = "Dog";
	m_brain = new Brain;
	std::cout << BLUE << DIM << "Dog has been created." << RESET <<  std::endl;
}

Dog::Dog( const Dog &copy ) : AAnimal(copy)
{
	*this = copy;
	m_brain = new Brain(*copy.m_brain);
	std::cout << BLUE << DIM << "Dog copy has been created." << RESET <<  std::endl;
}

Dog& Dog::operator=( const Dog &src)
{
	this->setType(src.m_type);
	return *this;
}

Dog::~Dog()
{
	delete m_brain;
	std::cout << BLUE << DIM << "Dog has been destructed." << RESET << std::endl;
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