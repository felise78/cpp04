/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:11:43 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/14 23:06:15 by hemottu          ###   ########.fr       */
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
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		// utils
		void init_inventory_n_floor( void );
		void del_inventory_n_floor( void );
		void printInventory( void );
		
		private:
		std::string m_name;
   		AMateria *m_inventory[4];
		AMateria *m_floor[100];
	};

#endif