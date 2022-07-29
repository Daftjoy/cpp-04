#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include <iomanip>
# include <limits>
# include <string>
# include <cstdlib>
# include <cmath>
# include "Animal.hpp"

class Cat : public Animal
{

    public:
        Cat();
        Cat(std::string Name);
        Cat(const Cat &other);
        ~Cat();
        
        void makeSound() const;


};


#endif