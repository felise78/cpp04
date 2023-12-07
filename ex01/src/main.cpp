/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:19 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/05 17:24:29 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

// int main()
// {
// 	Animal *cat;
// 	cat = new Cat;

// 	cat->makeSound();
// }

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();

// 	delete meta;
// 	delete j;
// 	delete i;
	
// 	return 0;
// }

int main()
{
	const Animal* j = new Dog();
	const Animal* k(j);
	//const Animal* i = new Cat();

	//j->brain.ideas[0] = "coucou";
	std::cout << j->getType() << std::endl;
	std::cout << k->getType() << std::endl;
	//std::cout << j->brain.ideas[0] << std::endl;
	//j = i; // la avec valgrind ca ne va pas
	delete j;//should not create a leak
	//delete i;



	return 0;
}