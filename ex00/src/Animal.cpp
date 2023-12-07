/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:25 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 12:25:00 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << RED << "Animal has been created." << RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << RED << "Animal has been destructed." << RESET << std::endl;
}

void Animal::makeSound( void ) const
{
	std::cout << RED << "*animal sound*" << RESET << std::endl;
}

std::string	Animal::getType( void ) const
{
	return type;
}
