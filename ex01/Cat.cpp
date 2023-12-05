/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:09:35 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 12:53:31 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain;
	std::cout << "Cat has been created." << std::endl;
}



Cat& Cat::operator=(Cat const& src) 
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
	std::cout << "Cat has been destructed." << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << "*meeeeeeow*" << std::endl;
}

std::string	Cat::getType( void ) const
{
	return type;
}