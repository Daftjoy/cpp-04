#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog's default constructor called" << std::endl;
    this->Name = "";
    this->type = "Dog";
}

Dog::Dog(std::string Name)
{
    std::cout << "Dog's string constructor called" << std::endl;
    this->Name = Name;
    this->type = "Dog";
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog's copy constructor called" << std::endl;
    this->Name = other.Name;
    this->type = other.type;
}

Dog::~Dog()
{
std::cout << "Dog's destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Guau" << std::endl;
}



