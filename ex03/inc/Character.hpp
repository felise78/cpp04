/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:11:43 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/13 19:02:36 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
	
	class Character : public ICharacter {
		
		public:
		// forme canonique
		Character();
		Character( const Character &copy );
		Character& operator=( const Character &copy );
		~Character();
		// constructeur avec param
   		Character(const std::string& name);
		// accesseur
		std::string const & getName() const;
		// fonctions membres
		void equip(AMateria* m);
		//void unequip(int idx); // laisser les objets au sol
		void use(int idx, ICharacter &target);
		void init_inventory( void );
		void del_inventory( void );
		
		private:
		std::string m_name;
   		AMateria *m_inventory[4];
	};

#endif