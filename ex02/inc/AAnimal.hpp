/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:27 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/11 16:47:16 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

	#include <string>

	class AAnimal
	{
		public:
		AAnimal();
		AAnimal( const AAnimal &copy );
		AAnimal& operator=( const AAnimal &src );
		virtual ~AAnimal();
		
		virtual void makeSound( void ) const = 0;
		
		virtual std::string getType( void ) const;
		virtual void setType( std::string type);
		
		protected:
		std::string m_type;
	};

	std::ostream&	operator<<(std::ostream& os, const AAnimal& animal);
	
#endif