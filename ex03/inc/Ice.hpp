/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:41:52 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/15 09:00:14 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

	#include "AMateria.hpp"

	class Ice : public AMateria {
		
		public:
		// forme canonique
		Ice();
		Ice( const Ice &copy );
		Ice& operator=( const Ice &src );
		~Ice();
		// accesseur 
		std::string const & getType() const;
		// fonctions membres
		AMateria* clone() const;
		void use( ICharacter& target );

		private:
		std::string m_type;
	};

#endif