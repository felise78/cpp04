/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:19 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 12:28:34 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

// Faire des tests;

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	// delete meta;
	// delete j;
	// delete i;
	
	// std::cout << std::endl;

	// const WrongAnimal *wrong = new WrongCat();
	// wrong->makeSound();
	// delete wrong;

	// std::cout << std::endl;

	// const Animal* j = new Dog();
	// const Animal* i(j);

	// i->makeSound(); //will output the cat sound!
	// j->makeSound();

	//Cat chat;
	Cat chat;
	std::cout << chat.getType() << std::endl;
	chat.setType("coucou");
	std::cout << chat.getType() << std::endl;
	chat.makeSound();

	Cat chat2(chat);

	std::cout << chat2.getType() << std::endl;
	chat2.setType("chat");
	std::cout << chat2.getType() << std::endl;
	chat2.makeSound();
	//delete chat;

	return 0;
}