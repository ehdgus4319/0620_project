//
//  Animal.hpp
//  0620_project
//
//  Created by 김동현 on 2022/06/23.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

class Animal
{
public:
    string name;
    string animal_type;
    Animal(string _name, string _animal_type);
    virtual void Bye();
    virtual void Hi();
};

class Dog :public Animal
{
public:
    Dog(string name, string animal_type = "강아지"); // 디폴트 생성자
    virtual void Bye();
    virtual void Hi();
};

class Cat :public Animal
{
public:
    Cat(string name, string animal_type = "고양이"); // 디폴트 생성자
    virtual void Bye();
    virtual void Hi();
};

#endif /* Animal_hpp */
