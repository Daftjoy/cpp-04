#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <iomanip>
# include <limits>
# include <string>
# include <cstdlib>
# include <cmath>
# include "Brain.hpp"

class Animal
{
    protected:
        std::string Name;
        std::string type;

    public:
        Animal();
        Animal(std::string Name, std::string type);
        Animal(const Animal &other);
        virtual ~Animal();

        Animal &operator=(const Animal &other);

        void setType(std::string type);
        void setName(std::string Name);

        std::string getType() const;
        std::string getName() const;
        
        virtual Brain *getBrain() const;

        virtual void makeSound() const;

};


#endif