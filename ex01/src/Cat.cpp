/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:09:35 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 17:14:24 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain;
	std::cout << GREEN << "Cat has been created." << RESET << std::endl;
}

Cat::Cat( const Cat &copy ) : Animal(copy)
{
	*this = copy;
}

Cat& Cat::operator=( const Cat &src ) 
{
    if(this != &src)
    {
		delete brain;
       	brain = new Brain(*(src.brain));
    }
    return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << GREEN << "Cat has been destructed." << RESET << std::endl;
}


// ###############################
// #      FONCTION  MEMBRE       #
// ###############################

void Cat::makeSound( void ) const
{
	std::cout << GREEN << "*meeeeeeow*" << RESET << std::endl;
}


// ##############################
// #         ACCESSEUR          #
// ##############################

std::string	Cat::getType( void ) const
{
	return type;
}