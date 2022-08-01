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
    *this = other;
}

Animal::~Animal()
{
std::cout << "Animal's destructor called" << std::endl;
}


Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Assignement operator for Animal called" << std::endl;
    this->Name = other.Name;
    this->type = other.type;
    return(*this);
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

Brain *Animal::getBrain() const
{
    std::cout << "This animal has no brain." << std::endl;
    return (NULL);
}

void Animal::makeSound() const
{
    std::cout << "*sound of silence*" << std::endl;
}
