/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:10:58 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 12:27:20 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << BLUE << "Dog has been created." << RESET <<  std::endl;
}

Dog::~Dog()
{
	std::cout << BLUE << "Dog has been destructed." << RESET << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << BLUE << "*woof woof*" << RESET << std::endl;
}

std::string	Dog::getType( void ) const
{
	return type;
}