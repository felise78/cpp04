/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:06:14 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/13 18:43:08 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

	#include <string>
	
	class AMateria;

	class ICharacter
	{
		public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		//virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
	};

#endif