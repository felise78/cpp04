

#include "WrongAnimal.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

WrongAnimal::WrongAnimal()
{
	std::cout << RED << "WrongAnimal has been created." << RESET << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy )
{
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &src)
{
    this->m_type = src.m_type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal has been destructed." << RESET << std::endl;
}



// ##############################
// #    MUTATEUR & ACCESSEUR    #
// ##############################

std::string	WrongAnimal::getType( void ) const
{
	return (this->m_type);
}

// ###############################
// #       FONCTION MEMBRE       #
// ###############################

void WrongAnimal::makeSound( void ) const
{
	std::cout << RED << "*wrong animal sound*" << RESET << std::endl;
}