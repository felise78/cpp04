/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:47:48 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/14 21:07:30 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "color.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Ice::Ice() : AMateria("ice")
{
	this->m_type = "ice";
	std::cout << color::DIM << "Ice" << color::GREEN << " has been created" << color::RESET << std::endl;
}
		
Ice::Ice( const Ice &copy ) : AMateria(copy)
{
	*this = copy;
	std::cout << color::DIM << "Ice copy" << color::GREEN << " has been created" << color::RESET << std::endl;
}

Ice& Ice::operator=( const Ice &copy )
{
	this->m_type = copy.m_type;
	return *this;
}

Ice::~Ice()
{
	std::cout << color::DIM << "Ice" << color::RED << " has been destructed" << color::RESET << std::endl;
}


// ###############################
// #          ACCESSEUR          #
// ###############################

std::string const & Ice::getType() const
{
	return this->m_type;
}

// ###############################
// #      FONCTION MEMBRE        #
// ###############################

AMateria* Ice::clone() const
{
	AMateria *cloned = new Ice(*this);
	return cloned;
}

void Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}