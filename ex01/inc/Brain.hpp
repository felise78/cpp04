/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:33:17 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/10 18:27:02 by hemottu          ###   ########.fr       */
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

		const std::string&	operator[](int i) const;
		
		private:
		std::string m_ideas[100];	
	};

#endif