#include "WrongCat.hpp"
#include <iostream>

// ###############################
// #       FORME CANONIQUE       #
// ###############################

WrongCat::WrongCat() : WrongAnimal()
{
	m_type = "WrongCat";
	std::cout << GREEN << "WrongCat has been created." << RESET << std::endl;
}

WrongCat::WrongCat( const WrongCat &copy ) : WrongAnimal(copy)
{
    *this = copy;
}

WrongCat& WrongCat::operator=( const WrongCat &src)
{
    this->m_type = src.m_type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << GREEN << "WrongCat has been destructed." << RESET << std::endl;
}


// ##############################
// #    MUTATEUR & ACCESSEUR    #
// ##############################

std::string	WrongCat::getType( void ) const
{
	return (this->m_type);
}

// ###############################
// #       FONCTION MEMBRE       #
// ###############################

void WrongCat::makeSound( void ) const
{
	std::cout << GREEN << "*meeeeeeoooooooooooooooooOOOOOOOOOooooow*" << RESET << std::endl;
}