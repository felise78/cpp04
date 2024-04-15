/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:09:35 by hemottu           #+#    #+#             */
/*   Updated: 2024/04/15 16:46:58 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "color.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Cat::Cat() : AAnimal()
{
	m_type = "Cat";
	m_brain = new Brain;
	std::cout << GREEN << DIM << "Cat has been created." << RESET << std::endl;
}

Cat::Cat( const Cat &copy ) : AAnimal(copy)
{
	*this = copy;
	m_brain = new Brain(*copy.m_brain);
	std::cout << GREEN << DIM << "Cat copy has been created." << RESET << std::endl;
}

Cat& Cat::operator=( const Cat &src )
{
	this->setType(src.m_type);
	return *this;
}

Cat::~Cat()
{
	delete m_brain;
	std::cout << DIM << GREEN << "Cat has been destructed." << RESET << std::endl;
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
