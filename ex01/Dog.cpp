/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:10:58 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 12:47:17 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal(), type("Dog")
{
	//type = "Dog";
	std::cout << "Dog has been created." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog has been destructed." << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "*woof woof*" << std::endl;
}

std::string	Dog::getType( void ) const
{
	return type;
}