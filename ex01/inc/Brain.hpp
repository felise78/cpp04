/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:33:17 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/10 18:00:03 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

	#include <string>

	class Brain
	{
		public :
		Brain();
		Brain( const Brain &copy );
		Brain& operator=( const Brain &src);
		~Brain();

		void	setIdeas( std::string &ideas );
		std::string getIdeas( void ) const [100] ;
		
		private:
		std::string m_ideas[100];	
	};

#endif