/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:41:57 by hemottu           #+#    #+#             */
/*   Updated: 2024/04/15 16:47:18 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "color.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

AMateria::AMateria() : m_type("unknown"), m_affected_to(false)
{
	std::cout << DIM << "AMateria" << GREEN << " has been created" << RESET << std::endl;
}

AMateria::AMateria( const AMateria &copy )
{
	*this = copy;
	std::cout << DIM << "AMateria copy " << GREEN << "has been created" << RESET << std::endl;
}
	
AMateria&  AMateria::operator=( const AMateria &src )
{
	m_type = src.m_type;
	m_affected_to = src.m_affected_to;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << DIM << "AMateria" << RED << " has been destructed" << RESET << std::endl;
}

// ###############################
// #   CONSTRUCTEUR  SURCHARGE   #
// ###############################

AMateria::AMateria( std::string const & type ) : m_type(type), m_affected_to(false)
{
	std::cout << DIM << "AMateria" << GREEN << " has been created" << RESET << std::endl;
}

// ###############################
// #    MUTATEUR & ACCESSEURS    #
// ###############################

std::string const & AMateria::getType() const
{
	return this->m_type;
}

bool const & AMateria::getAffect() const 
{
	return this->m_affected_to;
}

void AMateria::setAffect( bool affected )
{
	this->m_affected_to = affected;
}
