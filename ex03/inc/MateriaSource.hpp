/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:47:58 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/13 19:23:47 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

	#include "IMateriaSource.hpp"

	class MateriaSource : public IMateriaSource {

		public:
		MateriaSource();
		MateriaSource( const MateriaSource &copy );
		MateriaSource& operator=( const MateriaSource &copy );
		~MateriaSource();
		
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & materia);

		private:
		AMateria *m_materias[4];
	};

#endif