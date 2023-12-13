/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:42:09 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/13 19:35:31 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
// #include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
// #include "color.hpp"
#include <iostream>


// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }

int main ()
{
	// Character *perso = new Character("Pierre");
	// Character *copy = new Character(*perso);
	
	// std::cout << perso->getName() << std::endl;
	// std::cout << copy->getName() << std::endl;

	// delete perso;
	// delete copy;

	//AMateria("ice");
	//AMateria *copy = new Cure(*ice);
	std::cout << ice->getType() << std::endl;
	//std::cout << copy->getType() << std::endl;
	delete ice;
	//delete copy;	
}