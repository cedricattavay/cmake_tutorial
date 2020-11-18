//! \file Main.cpp
//! \brief Implements CMain
//! \author http://www.surgiqual-institute.com/
//! \date November 2020


#include <iostream>
#include <animals/Dog.h>

int main() {
    std::cout << "Hello World!" <<std::endl;

    animals::CDog l_MyDog("milou");
    std::cout << "My dog is " << l_MyDog.GetName() << std::endl;
    std::cout << "The breed of my dog is " << l_MyDog.GetBreed() << std::endl;

    return 0;
}
