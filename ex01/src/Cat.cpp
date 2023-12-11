/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:09:35 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/11 16:01:10 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "color.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Cat::Cat() : Animal()
{
	m_type = "Cat";
	m_brain = new Brain;
	std::cout << color::GREEN << color::DIM << "Cat has been created." << color::RESET << std::endl;
}

Cat::Cat( const Cat &copy ) : Animal(copy)
{
	*this = copy;
	m_brain = new Brain(*copy.m_brain);
	std::cout << color::GREEN << color::DIM << "Cat copy has been created." << color::RESET << std::endl;
}

Cat& Cat::operator=( const Cat &src )
{
	// copie de brain 
	this->setType(src.m_type);
	return *this;
}

Cat::~Cat()
{
	delete m_brain;
	std::cout << color::DIM << color::GREEN << "Cat has been destructed." << color::RESET << std::endl;
}


// ##############################
// #    MUTATEUR & ACCESSEURS   #
// ##############################

void Cat::setType( std::string type ) 
{
	this->m_type = type;
}

std::string	Cat::getType( void ) const
{
	return (this->m_type);
}

Brain* Cat::getBrain( void ) const
{
	return (this->m_brain);
}


// ###############################
// #       FONCTION MEMBRE       #
// ###############################

void Cat::makeSound( void ) const
{
	std::cout << "*meeeeeeow*" << std::endl;
}
