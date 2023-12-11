/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:09:49 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/11 16:48:39 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
	Cat();
	Cat( const Cat &copy );
	Cat& operator=( const Cat &src );
	~Cat();
	
	void makeSound( void ) const;

	std::string getType( void ) const;
	void	setType( std::string type );
	Brain* getBrain( void ) const;

	private:
	Brain *m_brain;
};

#endif