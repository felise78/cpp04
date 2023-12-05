/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:33:15 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 17:18:06 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

Brain::Brain()
{
	std::cout << "Hi this is Brain" << std::endl;
}

Brain::Brain( const Brain &copy )
{
	*this = copy;
}

Brain& Brain::operator=( const Brain &src )
{
	if(this != &src)
	{
		for(int i = 0 ; i < 100 ; i++)
			ideas[i] = src.ideas[i];
	}
    return *this;
}

Brain::~Brain()
{
	std::cout << "Bye Brain" << std::endl;
}

// ##############################
// #         ACCESSEUR          #
// ##############################