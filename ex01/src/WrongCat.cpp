/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:23:49 by hemottu           #+#    #+#             */
/*   Updated: 2024/04/15 16:46:49 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "color.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

WrongCat::WrongCat() : WrongAnimal()
{
	m_type = "WrongCat";
	m_brain = new Brain;
	std::cout << GREEN << DIM << "WrongCat has been created." << RESET << std::endl;
}

WrongCat::WrongCat( const WrongCat &copy ) : WrongAnimal(copy)
{
    *this = copy;
	std::cout << GREEN << DIM << "WrongCat copy has been created." << RESET << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat &src)
{
    this->setType(src.m_type);
	return *this;
}

WrongCat::~WrongCat()
{
	delete m_brain;
	std::cout << GREEN << DIM << "WrongCat has been destructed." << RESET << std::endl;
}


// ##############################
// #    MUTATEUR & ACCESSEUR    #
// ##############################

std::string	WrongCat::getType( void ) const
{
	return (this->m_type);
}

void	WrongCat::setType( std::string type )
{
	this->m_type = type;
}

// ###############################
// #       FONCTION MEMBRE       #
// ###############################

void WrongCat::makeSound( void ) const
{
	std::cout << "*meeeeeeoooooooooooooooooOOOOOOOOOooooow*" << std::endl;
}