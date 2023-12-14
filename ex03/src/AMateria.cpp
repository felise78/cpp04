/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:41:57 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/14 21:50:06 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "color.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

AMateria::AMateria()
{
	std::cout << color::DIM << "AMateria" << color::GREEN << " has been created" << color::RESET << std::endl;
}

AMateria::AMateria( const AMateria &copy )
{
	*this = copy;
	std::cout << color::DIM << "AMateria copy " << color::GREEN << "has been created" << color::RESET << std::endl;
}
	
AMateria&  AMateria::operator=( const AMateria &src )
{
	m_type = src.m_type;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << color::DIM << "AMateria" << color::RED << " has been destructed" << color::RESET << std::endl;
}

// ###############################
// #   CONSTRUCTEUR  SURCHARGE   #
// ###############################

AMateria::AMateria( std::string const & type ) : m_type(type)
{
	std::cout << color::DIM << "AMateria" << color::GREEN << " has been created" << color::RESET << std::endl;
}

// ###############################
// #    MUTATEUR & ACCESSEUR     #
// ###############################

std::string const & AMateria::getType() const
{
	return this->m_type;
}