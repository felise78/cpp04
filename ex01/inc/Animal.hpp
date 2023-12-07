/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:27 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 14:28:34 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

// codes de couleur
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define BLUE    "\033[34m"      /* Blue */

#include <string>

class Animal
{
	public:
	Animal();
	Animal( const Animal &copy );
	Animal& operator=( const Animal &src );
	virtual ~Animal();
	
	virtual void makeSound( void ) const;
	
	virtual std::string getType( void ) const;

	protected:
	std::string type;
};

#endif