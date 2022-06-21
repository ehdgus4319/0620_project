//
//  main.cpp
//  0620_project
//
//  Created by 김동현 on 2022/06/20.
//

#include <iostream>
#include <cstdio>
using namespace std;

class Base{
public:
    void Print() {
        cout << "From Base!!!" << endl;
    }
};

class Derived : public Base {
public:
    void Print(){
        cout << "From Derived!!!" << endl;
    }
    void Print2(){
        cout << "Derived2" << endl;
    }
};

int main() {
    
    Base *b = new Derived();
    b->Print();
    
    delete b;
    
    return 0;
}
