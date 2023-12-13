/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:48:02 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/13 19:24:11 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "color.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

MateriaSource::MateriaSource() 
{
	for (int i = 0; i < 4 ; i++)
		m_materias[i] = NULL;
	std::cout << color::YELLOW << "MateriaSource has been created" << color::RESET << std::endl;
}
		
MateriaSource::MateriaSource( const MateriaSource &copy )
{
	for (int i = 0; i < 4 ; i++)
		m_materias[i] = NULL;
	*this = copy;
	std::cout << color::YELLOW << "MateriaSource copy has been created" << color::RESET << std::endl;
}

MateriaSource& MateriaSource::operator=( const MateriaSource &copy )
{
	for (int i = 0; i < 4 ; i++)
		m_materias[i] = copy.m_materias[i];
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4 ; i++)
	{
		if (m_materias[i] != NULL)
			delete m_materias[i];
	}
	std::cout << color::YELLOW << "MateriaSource has been destructed" << color::RESET << std::endl;
}


// ###############################
// #      FONCTIONS MEMBRES      #
// ###############################

void MateriaSource::learnMateria(AMateria* materia) {

	int i = 0;
	while (i < 4 && m_materias[i] != NULL)
		i++;
	if (i == 4)
	{
		std::cout << "MateriaSource can not learn a new Materia" << std::endl;
		return;
	}
	m_materias[i] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & materia) {
	
	int i = 0;
	while (i < 4)
	{
		if (m_materias[i]->getType() == materia)
		{
			AMateria *cloned = NULL; // appeller fonction clone au lieu de NULL
			return cloned;
		}	
		i++;
	}
	std::cout << "MateriaSource do not know " << materia << std::endl;
	return NULL;
}