//
//  main.cpp
//  0620_project
//
//  Created by 김동현 on 2022/06/20.
//

#include <iostream>
#include <cstdio>
using namespace std;

class Weapon{
public:
    Weapon(int power) : power(power)
    {
        cout << "Weapon(int)" << endl;
    }
    
    virtual void Use()
    {
        cout << "Weapon::Use()" << endl;
    }
protected:
    int power;
};

class Sword : public Weapon
{
public:
    Sword(int power) : Weapon(power)
    {
        cout << "Sword(int)" << endl;
    }
    
    void Use()
    {
        cout << "Sword::Use()" << endl;
        Swing();
    }
private:
    void Swing()
    {
        cout << "Swing sword" << endl;
    }
};

class Magic : public Weapon
{
public:
    Magic(int power, int ManaCost) : Weapon(power), manaCost(manaCost)
    {
        cout << "Magic(int, int)" << endl;
    }
    void Use()
    {
        cout << "Magic::Use" << endl;
        Cast();
    }
private:
    void Cast()
    {
        cout << "Cast magic" << endl;
    }
    int manaCost;
};


int main() {
    Sword mySword(10);
    Magic myMagic(15, 7);
    
    mySword.Use();
    myMagic.Use();
    cout << endl << endl;
    
    Weapon *currentWeapon;
    currentWeapon = &mySword;
    
    currentWeapon->Use();
    
    currentWeapon = &myMagic;
    currentWeapon->Use();
    
   
    
    return 0;
}
