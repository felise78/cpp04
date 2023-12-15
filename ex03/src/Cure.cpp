/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:42:00 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/15 09:44:26 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "color.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Cure::Cure() : AMateria("cure")
{
	this->m_type = "cure";
	std::cout << color::DIM << "Cure" << color::GREEN << " has been created" << color::RESET << std::endl;
}
		
Cure::Cure( const Cure &copy ) : AMateria(copy)
{
	*this = copy;
	std::cout << color::DIM << "Cure copy" << color::GREEN << " has been created" << color::RESET << std::endl;
}

Cure& Cure::operator=( const Cure &copy )
{
	this->m_type = copy.m_type;
	this->m_affected_to = copy.m_affected_to;
	return *this;
}

Cure::~Cure()
{
	std::cout << color::DIM << "Cure" << color::RED << " has been destructed" << color::RESET << std::endl;
}


// ###############################
// #          ACCESSEUR          #
// ###############################

std::string const & Cure::getType() const
{
	return this->m_type;
}

// ###############################
// #      FONCTIONS MEMBRES      #
// ###############################

AMateria* Cure::clone() const
{
	AMateria *cloned = new Cure(*this);
	return cloned;
}

void Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}