#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include <iomanip>
# include <limits>
# include <string>
# include <cstdlib>
# include <cmath>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain * brain;

    public:
        Cat();
        Cat(std::string Name);
        Cat(const Cat &other);
        ~Cat();
        
        Cat &operator=(const Cat &other);

        void setBrain(Brain *brain);

        virtual Brain *getBrain() const;

        void makeSound() const;


};


#endif