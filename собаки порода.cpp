// собаки порода.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Dog
{
public:
    string breed;
    string size;
    string age;
    string color;

public:

    void show_emp_details() {
        cout << "\n\n**** Details of  Dog****";
        cout << "\nDog breed      :  " << breed;
        cout << "\nDog size       :  " << size;
        cout << "\nDog age        :  " << age;
        cout << "\nDog color      :  " << color;
        cout << "\n-------------------------------\n\n";
    }
};

int main()
{
    Dog emp1;
    emp1.breed = "Neapolitan Mastiff";
    emp1.size = "Large";
    emp1.age = "5 years";
    emp1.color = "Black";
    emp1.show_emp_details();

    Dog emp2;
    emp2.breed = "Maltese";
    emp2.size = "Small";
    emp2.age = "2 years";
    emp2.color = "White";
    emp2.show_emp_details();

    Dog emp3;
    emp3.breed = "Chow Chow";
    emp3.size = "Midium";
    emp3.age = "3 years";
    emp3.color = "Brown";
    emp3.show_emp_details();

    return 0;
}

