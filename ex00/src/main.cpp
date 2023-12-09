/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:19 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/09 16:14:12 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{	
	std::cout << "Tests : " << std::endl << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	
	std::cout << std::endl << std::endl;
	std::cout << "Test WrongClass :" << std::endl << std::endl;
	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	delete wrongAnimal;
	delete wrongCat;
	// const WrongAnimal *test = new Cat();
	// test->makeSound();
	// delete test;

	std::cout << std::endl << std::endl;
	std::cout << "Test de copies :" << std::endl << std::endl;
	Dog chien;
	std::cout << chien.getType() << std::endl;
	chien.setType("coucou");
	std::cout << chien.getType() << std::endl;
	chien.makeSound();
	Dog chien2(chien);
	std::cout << chien2.getType() << std::endl;
	chien2.setType("chien");
	std::cout << chien2.getType() << std::endl;
	chien2.makeSound();


	Animal chat("chat");
	Animal chat2(chat);
	std::cout << chat.getType() << std::endl;
	std::cout << chat2.getType() << std::endl;
	chat2.makeSound();
	
	return 0;
}