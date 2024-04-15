/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:11:49 by hemottu           #+#    #+#             */
/*   Updated: 2024/04/15 16:47:21 by hemottu          ###   ########.fr       */
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
	this->init_inventory_n_floor();
	std::cout << DIM << "Character" << GREEN << " has been created" << RESET << std::endl;
}
		
Character::Character( const Character &copy )
{
	this->init_inventory_n_floor();
	*this = copy;
	std::cout << DIM << "Character copy" << GREEN << " has been created" << RESET << std::endl;
}

Character& Character::operator=( const Character &copy )
{
	m_name = copy.m_name;
	this->del_inventory_n_floor();
	for (int i = 0; i < 4; i++)
	{
		if (copy.m_inventory[i] != NULL)
			m_inventory[i] = copy.m_inventory[i]->clone();
	}
	return *this;
}

Character::~Character()
{
	this->del_inventory_n_floor();
	std::cout << DIM << "Character " << this->m_name << RED << " has been destructed" << RESET << std::endl;
}


// ###############################
// #    CONSTRUCTEUR AV PARAM    #
// ###############################

Character::Character(const std::string& name) : m_name(name)
{
	this->init_inventory_n_floor();
	std::cout << DIM << "Character " << this->m_name << GREEN << " has been created" << RESET << std::endl;
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
	if (idx < 0 || idx > 3 || m_inventory[idx] == 0) 
	{
		std::cout << "There is no Materia at this place in the inventory" << std::endl;
		return ;
	}
	m_inventory[idx]->use(target);
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
		return;
	int i = 0;
	while(i < 4 && this->m_inventory[i] != NULL)
		i++;
	if (i == 4)
	{
		std::cout << "Character has no space in his inventory" << std::endl;
		return;
	}
	if (m->getAffect() == 0)
	{
		m->setAffect(true);
		this->m_inventory[i] = m;
	}
	else
		std::cout << "Materia has already been affected to a character" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || m_inventory[idx] == NULL)
	{
		std::cout << "No materia to unequip" << std::endl;
		return;
	}
	// sauvergarder dans le floor
	int i = 0;
	while(m_floor[i] != NULL)
		i++;
	this->m_floor[i] = m_inventory[idx];
	for (int i = idx; i < 3; i++)
	{
		m_inventory[i] = m_inventory[i + 1];
		m_inventory[i + 1] = NULL;
	}
	if (idx == 3)
		m_inventory[idx] = NULL;
}

// ###############################
// #            UTILS            #
// ###############################

void	Character::init_inventory_n_floor( void )
{
	for (int i = 0; i < 4; i++)
		this->m_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->m_floor[i] = NULL;
}

void	Character::del_inventory_n_floor( void )
{
	for(int i = 0; i < 4; i++) {
		if (m_inventory[i] != NULL)
		{
   			delete m_inventory[i];
			m_inventory[i] = NULL;
		}
	}
	for(int i = 0; i < 100; i++) {
		if (m_floor[i] != NULL)
		{
   			delete m_floor[i];
			m_floor[i] = NULL;
		}
	}
}

void Character::printInventory( void )
{
	for (int i = 0; i < 4; i++) {
		if (this->m_inventory[i] != NULL)
			std::cout << i << ". " << m_inventory[i]->getType() << std::endl;
	}
}