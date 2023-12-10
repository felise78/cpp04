/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:19 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/10 16:54:31 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

int	main(void) {

	Animal *animal = new Animal();
	Animal *dog = new Dog();
	Animal *cat = new Cat();
	WrongAnimal *wrongCat = new WrongCat();
	Animal *dogCopy = new Dog(*dynamic_cast<Dog*>(dog));
    Animal *catCopy = new Cat(*dynamic_cast<Cat*>(cat));

	std::cout << "\n>> Animals" << std::endl;
	std::cout << "animal : " << animal->getType() << std::endl;
	std::cout << "dog : " << dog->getType() << std::endl;
	std::cout << "cat : " << cat->getType() << std::endl;
	std::cout << "wrongCat : " << wrongCat->getType() << std::endl;
	std::cout << "dogCopy : " << dogCopy->getType() << std::endl;
	std::cout << "catCopy : " << catCopy->getType() << std::endl;

	std::cout << "\n>> MakeSound" << std::endl;

	std::cout << "animal: " << std::endl;
	animal->makeSound();

	std::cout << "dog: " << std::endl;
	dog->makeSound();

	std::cout << "dog copy: " << std::endl;
	dogCopy->makeSound();

	std::cout << "cat: " << std::endl;
	cat->makeSound();

	std::cout << "cat copy: " << std::endl;
	catCopy->makeSound();

	std::cout << "wrong cat: " << std::endl;
	wrongCat->makeSound();
	std::cout << std::endl;

	delete catCopy;
	delete dogCopy;
	delete wrongCat;
	delete cat;
	delete dog;
	delete animal;

	return (0);
}