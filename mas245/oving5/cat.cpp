#include "cat.h"
#include <iostream>

void Cat::move()
{
    std::cout << "Cat is moving!" << std::endl;
}


Cat::~Cat()
{
    std::cout << "Died." << std::endl;
}

Position Cat::getPosition()
{
    std::cout << "Cat pos: " << std::endl;
}

void Cat::setAge(int age)
{
    _age = age;
}

void Cat::printAge()
{
    std::cout << _age << std::endl;
}
