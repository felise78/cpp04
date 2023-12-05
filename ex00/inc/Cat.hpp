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
	virtual ~Cat();
	
	virtual void makeSound( void ) const;

	virtual std::string getType( void ) const;
};

#endif