/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:33:15 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/10 18:24:12 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "color.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Brain::Brain()
{
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

// void	Brain::setIdeas( std::string &ideas )
// {
// 	int i = 0;
// 	while (i < 100)
// 	{
// 		this->m_ideas[i] = ideas[i];
// 		i++;
// 	}
// }

// std::string  Brain::getIdeas( void ) const [100]
// {
// 	return (this->m_ideas);
// }


// ##############################
// #   SURCHARGES D'OPERATEUR   #
// ##############################

const std::string&	Brain::operator[](int i) const
{
	return (this->m_ideas[i]);
}