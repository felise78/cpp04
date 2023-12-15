/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:33:15 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/15 10:55:00 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "color.hpp"
#include <iostream>
#include <cstdlib>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Brain::Brain()
{
	this->init_brain();
	std::cout << color::DIM << "Hi this is Brain" << color::RESET << std::endl;
}

Brain::Brain( const Brain &copy )
{
	*this = copy;
	std::cout << color::DIM << "Hi this is a copy of Brain" << color::RESET << std::endl;
}

Brain& Brain::operator=( const Brain &src )
{
	for(int i = 0 ; i < 100 ; i++)
		m_ideas[i] = src.m_ideas[i];
    return *this;
}

Brain::~Brain()
{
	std::cout << color::DIM << "Bye Brain" << color::RESET << std::endl;
}

// ##############################
// #    MUTATEUR & ACCESSEUR    #
// ##############################


std::string& Brain::getIdea(int i)
{
    return this->m_ideas[i];
}

void Brain::setIdea(int i, const std::string& idea)
{
    this->m_ideas[i] = idea;
}

// ###############################
// #       FONCTION MEMBRE       #
// ###############################

void Brain::init_brain( void )
{
	std::string result = "";
	
	for (int i = 0; i < 100; i++)
	{
		int nb = i;
		if (nb == 0)
			result = "0";
		while (nb != 0)
		{
			int digit = nb % 10;
			result += static_cast<char>(digit + '0');
			nb /= 10;
   		}
		m_ideas[i] = "une " + result + "e idee";
		result = "";
	}
}