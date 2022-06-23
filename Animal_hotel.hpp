//
//  Animal_hotel.hpp
//  0620_project
//
//  Created by 김동현 on 2022/06/23.
//

#ifndef Animal_hotel_hpp
#define Animal_hotel_hpp

#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <string>
#include "Animal.hpp"

using namespace std;

class Animal_hotel
{
private:
    Animal* animal_num[8];
    int room_number;
    bool used[8];
public:
    Animal_hotel();
    int Show_menu();
    void Check_In();
    void Check_out();
};

#endif /* Animal_hotel_hpp */
