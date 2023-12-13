/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:47:48 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/13 19:30:35 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "color.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Ice::Ice() : m_type("ice")
{
	m_type = "ice";
	std::cout << color::YELLOW << "Ice has been created" << color::RESET << std::endl;
}
		
Ice::Ice( const Ice &copy )
{
	*this = copy;
	std::cout << color::YELLOW << "Ice copy has been created" << color::RESET << std::endl;
}

Ice& Ice::operator=( const Ice &copy )
{
	(void)copy;
	return *this;
}

Ice::~Ice()
{
	std::cout << color::YELLOW << "Ice has been destructed" << color::RESET << std::endl;
}




// std::string const & Ice::getType() const
// {
// 	return this->m_type;
// }

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