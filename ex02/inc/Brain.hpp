/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:33:17 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/11 12:15:04 by hemottu          ###   ########.fr       */
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
		Brain& operator=( const Brain &src );
		~Brain();

		const std::string&	operator[](int i) const;
		
		std::string& getIdea(int i);
		void setIdea(int i, const std::string& idea);

		private:
		std::string m_ideas[100];	
	};

#endif