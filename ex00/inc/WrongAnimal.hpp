#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

    #include <string>
    #include "color.hpp"

    class WrongAnimal
    {
        public:
        WrongAnimal();
        WrongAnimal( const WrongAnimal &copy );
		WrongAnimal& operator=( const WrongAnimal &src);
        virtual ~WrongAnimal();
        
        void makeSound( void ) const;
        
        virtual std::string getType( void ) const;
        virtual void setType( std::string type );
        
        protected:
        std::string m_type;
    };

#endif