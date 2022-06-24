//
//  Animal_hotel.cpp
//  0620_project
//
//  Created by 김동현 on 2022/06/23.
//

#include "Animal_hotel.hpp"


Animal_hotel::Animal_hotel() : room_number(0)
{
    for(int i = 0; i < 8; i++)
    {
        animal_num[i] = NULL;
    }
}
int Animal_hotel::Show_menu()
{
    int choice;
    cout << "========== 동물 호텔 ==========" << endl;
    cout << "방번호   이름    종류   방상태" << endl;
    for(int i = 0; i < 8; i++)
    {
        if(animal_num[i] != NULL)
        {
            cout << i + 1 << "번 방  " << animal_num[i]->animal_type << "   "<< animal_num[i]->name << "  투숙중" << endl;
        }
        if(animal_num[i] == NULL)
        {
            cout << i + 1 << "번 방        사용 가능   " << endl;
        }
    }
    cout << "1. 체크인          2. 체크아웃  선택 : ";
    cin >> choice;
    
    return choice;
}

void Animal_hotel::Check_In()
{
    static int temp_choice, count = 0;
    string temp_name;
    cout << "체크인을 합겠습니다." << endl;
    cout << "선택하세요 1. 강아지 or 2. 고양이 " << endl;
    cin >> temp_choice;
    for(int i = 0; i < 8; i++)
    {
        if(animal_num[i] == NULL)
        {
            if(temp_choice == 1)
            {
                cout << "강아지 이름 : "; cin >> temp_name;
                animal_num[count] = new Dog(temp_name);
                Dog(temp_name).Bye();
                count++;
                cout << count << "번 방에 투숙하겠습니다." << endl;
                break;
            }
            else if(temp_choice == 2)
            {
                cout << "고양이 이름 : "; cin >> temp_name;
                animal_num[count] = new Cat(temp_name);
                count++;
                Cat(temp_name).Bye();
                cout << count << "번 방에 투숙하겠습니다." << endl;
                break;
            }
        }
    }
}
void Animal_hotel::Check_out()
{
    int temp_num;
    cout << "체크아웃 할 방번호를 말해주세요." << endl;
    cin >> temp_num;
    
    if(animal_num[temp_num - 1]->animal_type == "고양이")
    {
        ((Cat*)animal_num[temp_num - 1]) -> Hi();
    }
    else if(animal_num[temp_num - 1] -> animal_type == "강아지")
    {
        ((Dog*)animal_num[temp_num - 1]) -> Hi();
    }
    delete animal_num[temp_num - 1];
    animal_num[temp_num -1] = NULL;
}
