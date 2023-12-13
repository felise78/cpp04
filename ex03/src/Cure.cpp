/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:42:00 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/13 19:14:52 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "color.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Cure::Cure() : m_type("cure")
{
	std::cout << color::YELLOW << "Cure has been created" << color::RESET << std::endl;
}
		
Cure::Cure( const Cure &copy )
{
	*this = copy;
	std::cout << color::YELLOW << "Cure copy has been created" << color::RESET << std::endl;
}

Cure& Cure::operator=( const Cure &copy )
{
	(void)copy;
	return *this;
}

Cure::~Cure()
{
	std::cout << color::YELLOW << "Cure has been destructed" << color::RESET << std::endl;
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