/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:19 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/10 18:28:39 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

// int	main(void) {

// 	Animal *animal = new Animal();
// 	Animal *dog = new Dog();
// 	Animal *cat = new Cat();
// 	WrongAnimal *wrongCat = new WrongCat();
// 	Animal *dogCopy = new Dog(*dynamic_cast<Dog*>(dog));
//     Animal *catCopy = new Cat(*dynamic_cast<Cat*>(cat));

// 	std::cout << "\n>> Animals" << std::endl;
// 	std::cout << "animal : " << animal->getType() << std::endl;
// 	std::cout << "dog : " << dog->getType() << std::endl;
// 	std::cout << "cat : " << cat->getType() << std::endl;
// 	std::cout << "wrongCat : " << wrongCat->getType() << std::endl;
// 	std::cout << "dogCopy : " << dogCopy->getType() << std::endl;
// 	std::cout << "catCopy : " << catCopy->getType() << std::endl;

// 	std::cout << "\n>> MakeSound" << std::endl;

// 	std::cout << "animal: " << std::endl;
// 	animal->makeSound();

// 	std::cout << "dog: " << std::endl;
// 	dog->makeSound();

// 	std::cout << "dog copy: " << std::endl;
// 	dogCopy->makeSound();

// 	std::cout << "cat: " << std::endl;
// 	cat->makeSound();

// 	std::cout << "cat copy: " << std::endl;
// 	catCopy->makeSound();

// 	std::cout << "wrong cat: " << std::endl;
// 	wrongCat->makeSound();
// 	std::cout << std::endl;

// 	delete catCopy;
// 	delete dogCopy;
// 	delete wrongCat;
// 	delete cat;
// 	delete dog;
// 	delete animal;

// 	return (0);
// }

int	main(void) {
	// Animal*	herd[10];
	// Dog		sample;

	// for (int index = 0; index < 10; index++) {
	// 	if (index % 2 == 0)
	// 		herd[index] = new Dog(sample);
	// 	else
	// 		herd[index] = new Cat();
	// }

	// std::cout << "\n>> Herd" << std::endl;
	// for (int index = 0; index < 10; index++) {
	// 	std::cout << index << ": " << *herd[index] << std::endl;
	// }

	// std::cout << "\n>> Sound" << std::endl;
	// for (int index = 0; index < 10; index++) {
	// 	std::cout << index << ": ";
	// 	herd[index]->makeSound();
	// }

	// for (int index = 0; index < 10; index++) {
	// 	delete (herd[index]);
	// }

	// return (0);

	Brain *test = new Brain;
	Brain[0] = "coucou";
}

/*
Dans votre fonction main, créez et remplissez un tableau d’objets Animal dont la
moitié est composée d’objets Dog et l’autre moitié d’objets Cat. À la fin de l’exécution
du programme, parcourez ce tableau afin de delete chaque Animal. Vous devez delete
directement les chiens et les chats en tant qu’Animal. Les destructeurs correspondants
doivent être appelés dans le bon ordre.

N’oubliez pas de vérifier que vous n’avez pas de fuites de mémoire.

La copie d’un objet Dog ou d’un objet Cat ne doit pas être superficielle. Par consé-
quent, vous devez vous assurer que vos copies sont bien des copies profondes.
*/