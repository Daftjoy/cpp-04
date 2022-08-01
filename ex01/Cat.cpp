#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat's default constructor called" << std::endl;
    this->Name = "";
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(std::string Name)
{
    std::cout << "Cat's string constructor called" << std::endl;
    this->Name = Name;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat's copy constructor called" << std::endl;
    *this = other;
}

Cat::~Cat()
{
    std::cout << "Cat's destructor called" << std::endl;
    delete this->brain;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Assignement operator for Cat called" << std::endl;
    this->Name = other.Name;
    this->type = other.type;
    this->brain = other.brain;
    return(*this);
}

void Cat::setBrain(Brain *brain)
{
    this->brain = brain;
}

Brain *Cat::getBrain() const
{
    return (this->brain);
}

void Cat::makeSound() const
{
    std::cout << "Miau" << std::endl;
}



