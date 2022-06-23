#include <iostream>
#include <cstdio>
#include <string>
#include "Animal.hpp"
#include "Animal_hotel.hpp"
using namespace std;


int main(void)
{
    int choice;
    Animal_hotel hotel;
    while(1)
    {
        choice = hotel.Show_menu();
        if(choice == 1)
        {
            hotel.Check_In();
        }
        else if(choice == 2)
        {
            hotel.Check_out();
        }
        
    }
    return 0;
}
