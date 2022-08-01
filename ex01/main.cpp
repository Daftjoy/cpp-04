#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void){

    int i = 0;
    Animal *animals[10];
    Brain * dog_brain;
    Brain * cat_brain;

    while (i < 5)
    {
        animals[i++] = new Dog();
    }

    while (i < 10)
    {
        animals[i++] = new Cat();
    }

    dog_brain = animals[2]->getBrain();
    dog_brain->ideas[0] = "I am a dog";
    dog_brain->ideas[1] = "I hate cats";

    cat_brain = animals[7]->getBrain();
    cat_brain->ideas[0] = "I am a cat";
    cat_brain->ideas[1] = "I hate dogs";

    *(animals[2]) = *(animals[7]);

    animals[2]->makeSound();
    std::cout << animals[2]->getBrain()->ideas[0] << std::endl;

    animals[7]->makeSound();
    std::cout << animals[7]->getBrain()->ideas[0] << std::endl;


    while (--i > 0)
        delete animals[i];
    //while(1);
}