/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:10:58 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 17:14:33 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Dog::Dog() : Animal()
{
	type = "Dog";
	brain = new Brain;
	std::cout << BLUE << "Dog has been created." << RESET << std::endl;
}

Dog::Dog( const Dog &copy ) : Animal(copy)
{
	// brain = new Brain();
	// brain = *(copy.brain);
	// type = copy.type;
	*this = copy;
}

Dog& Dog::operator=( const Dog &src )
{
	if(this != &src)
	{
		delete this->brain;
		this->brain = new Brain;
		// if (this->brain == NULL)
		// {
		// 	perror("Dog Brain allocation failed"); //cerr ile yaz!!!
		// 	std::cerr << "Exiting the process now." << std::endl;
		// 	exit(1);
		// }
		*this->brain = *(src.brain);
		//this->setType(src.getType());
		type = src.type;
	}
    return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << BLUE << "Dog has been destructed." << RESET << std::endl;
}


// ###############################
// #      FONCTION  MEMBRE       #
// ###############################

void Dog::makeSound( void ) const
{
	std::cout << BLUE << "*woof woof*" << RESET << std::endl;
}


// ##############################
// #         ACCESSEUR          #
// ##############################

std::string	Dog::getType( void ) const
{
	return type;
}