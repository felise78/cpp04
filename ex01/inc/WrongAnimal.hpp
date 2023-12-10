#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

    #include <string>

    class WrongAnimal
    {
        public:
        WrongAnimal();
        WrongAnimal( const WrongAnimal &copy );
		WrongAnimal& operator=( const WrongAnimal &src);
        virtual ~WrongAnimal();
        
        virtual void makeSound( void ) const;
        
        virtual std::string getType( void ) const;
        virtual void setType( std::string type );
        
        protected:
        std::string m_type;
    };

#endif