#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <string>
#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal
{
	public:
	WrongCat();
    WrongCat( const WrongCat &copy );
	WrongCat& operator=( const WrongCat &src);
	~WrongCat();
	
	void makeSound( void ) const;

	std::string getType( void ) const;
	void setType( std::string type );

	private:
	Brain *m_brain;
};

#endif