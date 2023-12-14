/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:41:50 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/14 16:43:22 by hemottu          ###   ########.fr       */
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

		std::string const & getType() const;
		
		AMateria* clone() const ;
		void use( ICharacter& target );
		
		private:
		std::string m_type;
	};

#endif