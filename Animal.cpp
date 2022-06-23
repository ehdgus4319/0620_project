//
//  Animal.cpp
//  0620_project
//
//  Created by 김동현 on 2022/06/23.
//

#include "Animal.hpp"

Animal::Animal(string _name, string _animal_type) : name(_name), animal_type(_animal_type)
{
    // empty
}

void Animal::Bye()
{
    // empty
}
void Animal::Hi()
{
    // empty
}


Dog::Dog(string name, string animal_type) : Animal(animal_type, name)
{
    // empty
}

void Dog::Bye()
{
    cout << "멍멍!! 이따봐" << endl;
}
void Dog::Hi()
{
    cout << "멍멍!! 이따봐" << endl;
}



Cat::Cat(string name, string animal_type) : Animal(animal_type, name)
{
    // empty
}

void Cat::Bye()
{
    cout << "야옹!! 이따봐" << endl;
}
void Cat::Hi()
{
    cout << "야옹!! 안녕!" << endl;
}

