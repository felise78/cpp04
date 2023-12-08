#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

    #include <string>

    // codes de couleur
    #define RESET   "\033[0m"
    #define RED     "\033[31m"      /* Red */
    #define GREEN   "\033[32m"      /* Green */
    #define BLUE    "\033[34m"      /* Blue */

    class WrongAnimal
    {
        public:
        WrongAnimal();
        WrongAnimal( const WrongAnimal &copy );
		WrongAnimal& operator=( const WrongAnimal &src);
        virtual ~WrongAnimal();
        
        virtual void makeSound( void ) const;
        
        virtual std::string getType( void ) const;

        protected:
        std::string m_type;
    };

#endif