/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:03:19 by hemottu           #+#    #+#             */
/*   Updated: 2023/12/11 16:52:04 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

int	main(void)
{
	////////////////////////////////////////////////////////////////////////////////// brain
	
	std::cout << "\n>> Brain" << std::endl;
	Brain *test = new Brain;
	std::cout << test->getIdea(0) << std::endl;
	test->setIdea(0, "une mauvaise idee");
	Brain *test2 = new Brain(*test);
	std::cout << test2->getIdea(0) << std::endl;
	delete test;
	delete test2;
	std::cout << std::endl;
	
	////////////////////////////////////////////////////////////////////////////////// animaux

	AAnimal *animals[10];
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << ". ";
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	
	std::cout << "\n>> Animals" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << i << ". " << *animals[i] << std::endl;

	std::cout << "\n>> Sound" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << ". ";
		animals[i]->makeSound();
	}
	
	std::cout << "\n>> Brain in animals" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << ". ";
		if (i % 2 == 0)
			std::cout << dynamic_cast<Dog*>(animals[i])->getBrain()->getIdea(i) << std::endl;
		else
			std::cout << dynamic_cast<Cat*>(animals[i])->getBrain()->getIdea(i) << std::endl;
	}
	std::cout << std::endl;
	
////////////////////////////////////////////////////////////////////////////////// copies

	AAnimal *animals_cpy[10];
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << ". ";
		if (i % 2 == 0)
			animals_cpy[i] = new Dog(*dynamic_cast<Dog*>(animals[i]));
		else
			animals_cpy[i] = new Cat(*dynamic_cast<Cat*>(animals[i]));
	}

	std::cout << "\n>> Animals" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << i << ". " << *animals_cpy[i] << std::endl;

	std::cout << "\n>> Sound" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << ". "; 
		animals_cpy[i]->makeSound();
	}
	
	std::cout << "\n>> Brain in animals" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << ". ";
		if (i % 2 == 0)
			std::cout << dynamic_cast<Dog*>(animals_cpy[i])->getBrain()->getIdea(i) << std::endl;
		else
			std::cout << dynamic_cast<Cat*>(animals_cpy[i])->getBrain()->getIdea(i) << std::endl;
	}

///////////////////////////////////////////////////////////////////////////////////// delete	

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << ". ";
		delete (animals[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 10 << ". ";
		delete (animals_cpy[i]);
	}

	//////////////////////////////////// test instance de la classe abstraite / ne compile pas

	//Animal test_animal;

	return (0);
}