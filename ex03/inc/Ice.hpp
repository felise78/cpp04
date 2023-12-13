/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:41:52 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/13 19:30:23 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

	#include "AMateria.hpp"

	class Ice : public AMateria {
		
		public:
		Ice();
		Ice( const Ice &copy );
		Ice& operator=( const Ice &src );
		~Ice();

		//std::string const & getType() const;
		
		AMateria* clone() const;
		void use( ICharacter& target );

		private:
		std::string m_type;
	};

#endif