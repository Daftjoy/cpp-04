#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal's default constructor called" << std::endl;
    this->Name = "";
    this->type = "";
}

Animal::Animal(std::string Name, std::string type)
{
    std::cout << "Animal's string constructor called" << std::endl;
    this->Name = Name;
    this->type = type;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal's copy constructor called" << std::endl;
    this->Name = other.Name;
    this->type = other.type;
}

Animal::~Animal()
{
std::cout << "Animal's destructor called" << std::endl;
}

void Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::setName(std::string Name)
{
    this->Name = Name;
}

std::string Animal::getType() const
{
    return this->type;
}

std::string Animal::getName() const
{
    return this->Name;
}


void Animal::makeSound() const
{
    std::cout << "*sound of silence*" << std::endl;
}
