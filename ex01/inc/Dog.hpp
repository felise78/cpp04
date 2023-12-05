/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:11:01 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 14:29:55 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
	Dog();
	Dog( const Dog &copy );
	Dog& operator=( const Dog &src );
	virtual ~Dog();
	
	virtual void makeSound( void ) const;

	virtual std::string getType( void ) const;

	private:
	Brain *brain;
};

#endif