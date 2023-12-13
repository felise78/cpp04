/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:41:50 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/13 15:12:59 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

	#include "AMateria.hpp"

	class Cure : public AMateria {

		public:
		Cure();
		Cure( const Cure &copy );
		Cure& operator=( const Cure &src );
		~Cure();

		AMateria* clone() const ;
		void use( ICharacter& target );
		
		private:
		std::string m_type;
	};

#endif