/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:48:02 by hemottu           #+#    #+#             */
/*   Updated: 2024/04/15 16:47:35 by hemottu          ###   ########.fr       */
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
	std::cout << DIM << "MateriaSource" << GREEN << " has been created" << RESET << std::endl;
}
		
MateriaSource::MateriaSource( const MateriaSource &copy )
{
	for (int i = 0; i < 4 ; i++)
		m_materias[i] = NULL;
	*this = copy;
	std::cout << DIM << "MateriaSource copy" << GREEN << " has been created" << RESET << std::endl;
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
	std::cout << DIM << "MateriaSource" << RED << " has been destructed" << RESET << std::endl;
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
		delete materia;
		return;
	}
	m_materias[i] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & materia) {
	
	int i = 0;
	while (i < 4)
	{
		if (m_materias[i] && m_materias[i]->getType() == materia)
		{
			AMateria *cloned = m_materias[i]->clone();
			return cloned;
		}	
		i++;
	}
	std::cout << "MateriaSource do not know " << materia << std::endl;
	return NULL;
}