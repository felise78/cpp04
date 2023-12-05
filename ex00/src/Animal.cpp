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
	std::cout << "Animal has been created." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal has been destructed." << std::endl;
}

void Animal::makeSound( void ) const
{
	std::cout << "*animal sound*" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return type;
}
