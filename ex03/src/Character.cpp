/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:11:49 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/13 19:05:27 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "color.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Character::Character() : m_name("default")
{
	this->init_inventory();
	std::cout << color::YELLOW << "Character has been created" << color::RESET << std::endl;
}
		
Character::Character( const Character &copy )
{
	this->init_inventory();
	*this = copy;
	std::cout << color::YELLOW << "Character copy has been created" << color::RESET << std::endl;
}

Character& Character::operator=( const Character &copy )
{
	m_name = copy.m_name;
	this->del_inventory();
	for (int i = 0; i < 4; i++)
	{
		if (copy.m_inventory[i] != NULL)
			m_inventory[i] = copy.m_inventory[i];
	}
	return *this;
}

Character::~Character()
{
	this->del_inventory();
	std::cout << color::YELLOW << "Character has been destructed" << color::RESET << std::endl;
}


// ###############################
// #   CONSTRUCTEUR  SURCHARGE   #
// ###############################

Character::Character(const std::string& name) : m_name(name)
{
	this->init_inventory();
	std::cout << color::YELLOW << "Character " << this->m_name << " has been created" << color::RESET << std::endl;
}

// ###############################
// #          ACCESSEUR          #
// ###############################

std::string const & Character::getName() const
{
	return (this->m_name);
}

// ###############################
// #      FONCTIONS MEMBRES      #
// ###############################

void	Character::use(int idx, ICharacter& target)
{
	if (m_inventory[idx] == 0) // est-ce que ca protege pour le i >= 4 ? // a tester 
	{
		std::cout << "There is no Materia at this place in the inventory" << std::endl;
		return ;
	}
	m_inventory[idx]->use(target);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while(i < 4 && this->m_inventory[i] != NULL)
		i++;
	if (i == 4)
		return;
	this->m_inventory[i] = m;
}

// void Character::unequip(int idx)
// {
	
// }

void	Character::init_inventory( void )
{
	for (int i = 0; i < 4; i++)
		this->m_inventory[i] = NULL;
}

void	Character::del_inventory( void )
{
	for(int i = 0; i < 4; i++) {
		if (m_inventory[i] != NULL)
   			delete m_inventory[i];
	}
}