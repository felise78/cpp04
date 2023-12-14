/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:41:46 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/14 21:50:13 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>

	class AMateria {
		
		public:
		//forme canonique
		AMateria();
		AMateria( const AMateria &copy );
		AMateria&  operator=( const AMateria &src );
		virtual ~AMateria();
		//constructeur ac param
		AMateria( std::string const & type );
		//accesseur
		std::string const & getType() const;
		//fonctions membres
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
		
		protected: 
		std::string m_type;
	};

#endif