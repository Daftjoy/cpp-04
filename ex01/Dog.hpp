#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <iomanip>
# include <limits>
# include <string>
# include <cstdlib>
# include <cmath>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain * brain;  
    
    public:
        Dog();
        Dog(std::string Name);
        Dog(const Dog &other);
        ~Dog();

        Dog &operator=(const Dog &other);

        void setBrain(Brain *brain);

        virtual Brain *getBrain() const;
        
        void makeSound() const;

};


#endif