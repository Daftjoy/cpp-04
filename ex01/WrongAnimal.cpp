#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal's default constructor called" << std::endl;
    this->Name = "";
    this->type = "";
}

WrongAnimal::WrongAnimal(std::string Name, std::string type)
{
    std::cout << "WrongAnimal's string constructor called" << std::endl;
    this->Name = Name;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "WrongAnimal's copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal::~WrongAnimal()
{
std::cout << "WrongAnimal's destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "Assignement operator for WrongAnimal called" << std::endl;
    this->Name = other.Name;
    this->type = other.type;
    return(*this);
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

void WrongAnimal::setName(std::string Name)
{
    this->Name = Name;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

std::string WrongAnimal::getName() const
{
    return this->Name;
}


void WrongAnimal::makeSound() const
{
    std::cout << "*sound of silence*" << std::endl;
}
