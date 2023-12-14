/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:42:09 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/14 23:04:14 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "color.hpp"
#include <iostream>


// ---------------------------------------------------------------------  main du sujet 

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	Character *me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->printInventory();
	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(3);
	me->printInventory();
	
	delete bob;
	delete me;
	delete src;
	return 0;
}

// ----------------------------------------------------------------------------------------


/*
int main ()
{
	// tests de copies
	std::cout << "\n>> Test copie de Ice" << std::endl;
	Ice *ice = new Ice();
	Ice *ice2 = new Ice(*ice);
	std::cout << "ice : " << ice->getType() << std::endl;
	std::cout << "copy de ice : " << ice2->getType() << std::endl;
	delete ice;
	delete ice2;
	
	std::cout << "\n>> Test copie de Cure" << std::endl;
	Cure *cure = new Cure();
	Cure *cure2 = new Cure(*cure);
	std::cout << cure->getType() << std::endl;
	std::cout << cure2->getType() << std::endl;
	delete cure;
	delete cure2;

	std::cout << "\n>> Test de de la fonction clone()" << std::endl;
	AMateria *materia_ice = new Ice();
	AMateria *clone_ice = materia_ice->clone();
	std::cout << materia_ice->getType() << std::endl;
	std::cout << clone_ice->getType() << std::endl;
	delete materia_ice;
	delete clone_ice;

	// tests de MateriaSource
	std::cout << "\n>> Test learnmateria()" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	
	std::cout << "\n>> Test createmateria() et equip()" << std::endl;
	Character *me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	me->equip(tmp);
	me->printInventory();
	delete src;
	//delete me;

	// tests Characters
	std::cout << "\n>> Test copie profonde de Character" << std::endl;
	Character *you = new Character(*me);
	you->printInventory();
	delete me;
	delete you;
}*/




// int main ()
// {
// 	Character *perso = new Character("Pierre");
// 	std::cout << "perso : " << perso->getName() << std::endl;
// 	AMateria *tmp = new Ice();
// 	std::cout << "tmp : " << tmp->getType() << std::endl;
// 	perso->equip(tmp);
// 	std::cout << "inventory de pierre : " << perso->getInventory(0).getType() << std::endl;
	
	
// 	Character *copy = new Character(*perso);
	
// 	std::cout << "prenom de copy : " << copy->getName() << std::endl;
// 	std::cout <<  "inventory de copy : " << copy->getInventory(0).getType() << std::endl;
// 	delete perso;
// 	delete copy;
// }