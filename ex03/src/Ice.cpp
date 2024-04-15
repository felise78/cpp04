/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:47:48 by hemottu           #+#    #+#             */
/*   Updated: 2024/04/15 16:47:28 by hemottu          ###   ########.fr       */
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
	std::cout << DIM << "Ice" << GREEN << " has been created" << RESET << std::endl;
}
		
Ice::Ice( const Ice &copy ) : AMateria(copy)
{
	*this = copy;
	std::cout << DIM << "Ice copy" << GREEN << " has been created" << RESET << std::endl;
}

Ice& Ice::operator=( const Ice &copy )
{
	this->m_type = copy.m_type;
	this->m_type = copy.m_affected_to;
	return *this;
}

Ice::~Ice()
{
	std::cout << DIM << "Ice" << RED << " has been destructed" << RESET << std::endl;
}


// ###############################
// #          ACCESSEUR          #
// ###############################

std::string const & Ice::getType() const
{
	return this->m_type;
}

// ###############################
// #     FONCTIONS MEMBRES       #
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