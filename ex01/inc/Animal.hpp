/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:27 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/10 17:22:25 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

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
		virtual void setType( std::string type);

		protected:
		std::string m_type;
	};

#endif