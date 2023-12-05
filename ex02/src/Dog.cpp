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
	std::cout << "Dog has been created." << std::endl;
}

Dog::Dog( const Dog &copy )
{
	*this = copy;
}

Dog& Dog::operator=( const Dog &src )
{
	if(this != &src)
    {
		delete brain;
       	brain = new Brain(*(src.brain));
    }
    return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog has been destructed." << std::endl;
}


// ###############################
// #      FONCTION  MEMBRE       #
// ###############################

void Dog::makeSound( void ) const
{
	std::cout << "*woof woof*" << std::endl;
}


// ##############################
// #         ACCESSEUR          #
// ##############################

std::string	Dog::getType( void ) const
{
	return type;
}