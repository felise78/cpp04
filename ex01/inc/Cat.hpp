/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:09:49 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 14:29:00 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
	Cat();
	Cat( const Cat &copy );
	Cat& operator=( const Cat &src );
	virtual ~Cat();
	
	virtual void makeSound( void ) const;

	virtual std::string getType( void ) const;

	private:
	Brain *brain;
};

#endif