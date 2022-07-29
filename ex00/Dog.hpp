#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <iomanip>
# include <limits>
# include <string>
# include <cstdlib>
# include <cmath>
# include "Animal.hpp"

class Dog : public Animal
{

    public:
        Dog();
        Dog(std::string Name);
        Dog(const Dog &other);
        ~Dog();
        
        void makeSound() const;

};


#endif