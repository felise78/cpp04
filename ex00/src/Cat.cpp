/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:09:35 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 12:27:06 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << GREEN << "Cat has been created." << RESET << std::endl;
}

Cat::~Cat()
{
	std::cout << GREEN << "Cat has been destructed." << RESET << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << GREEN << "*meeeeeeow*" << RESET << std::endl;
}

std::string	Cat::getType( void ) const
{
	return type;
}