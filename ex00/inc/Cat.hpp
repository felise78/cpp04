/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:09:49 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 12:25:28 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
	Cat();
	Cat( const Cat &copy );
	Cat& operator=( const Cat &src);
	~Cat();
	
	void makeSound( void ) const;

	std::string getType( void ) const;
	void setType( std::string type );

};

#endif