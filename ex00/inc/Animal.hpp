/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:27 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 12:25:22 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	public:
	Animal();
	virtual ~Animal();
	
	virtual void makeSound( void ) const;
	
	virtual std::string getType( void ) const;

	protected:
	std::string type;
};

#endif