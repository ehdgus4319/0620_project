#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

class Animal
{
public:
    string name;
    string animal_type;
    Animal(string _name, string _animal_type) : name(_name), animal_type(_animal_type)
    {
        // empty
    }
//    Animal(string _name) : name(_name)
//    {
//        // empty
//    }
    virtual void Bye()
    {
        // empty
    }
    virtual void Hi()
    {
        // empty
    }
};


class Dog :public Animal
{
public:
    Dog(string name, string animal_type = "강아지") : Animal(animal_type, name)
    {
       
        // empty
    }
//    Dog(string _name) : Animal(_name)
//    {
//        // empty
//    }
    virtual void Bye()
    {
        cout << "멍멍!! 이따봐" << endl;
    }
    virtual void Hi()
    {
        cout << "멍멍!! 이따봐" << endl;
    }
};

class Cat :public Animal
{
public:
    Cat(string name, string animal_type = "고양이") : Animal(animal_type, name)
    {
        // empty
    }
//    Cat(string _name) : Animal(_name)
//    {
//        // empty
//    }
    virtual void Bye()
    {
        cout << "야옹!! 이따봐" << endl;
    }
    virtual void Hi()
    {
        cout << "야옹!! 안녕!" << endl;
    }
};

class Animal_hotel
{
private:
    Animal* animal_num[8];
    int room_number;
    bool used[8];
public:
    Animal_hotel() : room_number(0)
    {
        for(int i = 0; i < 8; i++)
        {
            animal_num[i] = NULL;
            used[i] = false;
        }
    }
    int Show_menu()
    {
        int choice;
        cout << "========== 동물 호텔 ==========" << endl;
        cout << "방번호   이름    종류   방상태" << endl;
        for(int i = 0; i < 8; i++)
        {
            if(used[i] == true)
            {
                cout << i + 1 << "번 방  " << animal_num[i]->animal_type << "   "<< animal_num[i]->name << "  투숙중" << endl;
            }
        }
        cout << "1. 체크인          2. 체크아웃  선택 : ";
        cin >> choice;
        
        return choice;
    }
    
    void Check_In()
    {
        static int temp_choice, count = 0;
        string temp_name;
        cout << "체크인을 합겠습니다." << endl;
        cout << "선택하세요 1. 강아지 or 2. 고양이 " << endl;
        cin >> temp_choice;
        for(int i = 0; i < 8; i++)
        {
            if(used[i] == false)
            {
                if(temp_choice == 1)
                {
                    cout << "강아지 이름 : "; cin >> temp_name;
                    animal_num[count] = new Dog(temp_name);
                    Dog(temp_name).Bye();
                    count++;
                    used[i] = true;
                    cout << count + 1 << "번 방에 투숙하겠습니다." << endl;
                    break;
                }
                else if(temp_choice == 2)
                {
                    cout << "고양이 이름 : "; cin >> temp_name;
                    animal_num[count] = new Cat(temp_name);
                    count++;
                    Cat(temp_name).Bye();
                    used[i] = true;
                    cout << count + 1 << "번 방에 투숙하겠습니다." << endl;
                    break;
                }
            }
        }
    }
    void Check_out()
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
        used[temp_num -1] = false;
    }
};

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
