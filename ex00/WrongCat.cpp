#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat's default constructor called" << std::endl;
    this->Name = "";
    this->type = "WrongCat";
}

WrongCat::WrongCat(std::string Name)
{
    std::cout << "WrongCat's string constructor called" << std::endl;
    this->Name = Name;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "WrongCat's copy constructor called" << std::endl;
    this->Name = other.Name;
    this->type = other.type;
}

WrongCat::~WrongCat()
{
std::cout << "WrongCat's destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Miau" << std::endl;
}



