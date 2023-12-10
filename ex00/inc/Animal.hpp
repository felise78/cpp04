/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:27 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/10 16:57:35 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

	#include <string>
	#include "color.hpp"

	class Animal
	{
		public:
		Animal();
		Animal( const Animal &copy );
		Animal& operator=( const Animal &src);
		virtual ~Animal();
		
		virtual void setType( std::string type );
		virtual std::string getType( void ) const;
		
		virtual void makeSound( void ) const;
		
		protected:
		std::string m_type;
	};

#endif