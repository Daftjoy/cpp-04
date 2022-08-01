#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <iomanip>
# include <limits>
# include <string>
# include <cstdlib>
# include <cmath>

class WrongAnimal
{
    protected:
        std::string Name;
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(std::string Name, std::string type);
        WrongAnimal(const WrongAnimal &other);
        ~WrongAnimal();

        WrongAnimal &operator=(const WrongAnimal &other);

        void setType(std::string type);
        void setName(std::string Name);

        std::string getType() const;
        std::string getName() const;
        
       void makeSound() const;

};


#endif