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

	// codes de couleur
	#define RESET   "\033[0m"
	#define RED     "\033[31m"      /* Red */
	#define GREEN   "\033[32m"      /* Green */
	#define BLUE    "\033[34m"      /* Blue */

	class Animal
	{
		public:
		Animal();
		Animal( const Animal &copy );
		Animal& operator=( const Animal &src);
		virtual ~Animal();
		
		Animal( std::string type );
		
		virtual void makeSound( void ) const;
		
		virtual std::string getType( void ) const;
		void setType( std::string type);

		protected:
		std::string m_type;
	};

#endif