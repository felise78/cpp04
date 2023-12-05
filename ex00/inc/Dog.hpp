/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:11:01 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 12:25:40 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
	Dog();
	virtual ~Dog();
	
	virtual void makeSound( void ) const;

	virtual std::string getType( void ) const;
};

#endif