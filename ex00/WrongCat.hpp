#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include <iomanip>
# include <limits>
# include <string>
# include <cstdlib>
# include <cmath>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

    public:
        WrongCat();
        WrongCat(std::string Name);
        WrongCat(const WrongCat &other);
        ~WrongCat();
        
        void makeSound() const;

};


#endif