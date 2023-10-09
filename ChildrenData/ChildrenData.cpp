#include <iostream>
#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
//#include <cstdlib>
#include <ctype.h>

using namespace std;

class Children 
{
private:
    string _name;
    string _surname;
    int _age;

public:
    Children() {};
    Children(const string& Name, const string& Surname, const int& Age) :
        _name(Name),
        _surname(Surname),
        _age(Age) {};

    string GetName() {
        return _name != "" ? _name : "Error!";
    }

    void SetName(const string& Name) {
        _name = Name;
    }

    string GetSurname() {
        return _surname != "" ? _surname : "Error!";
    }

    void SetSurname(const string& Surname) {
        _surname = Surname;
    }

    int GetAge() {
        return _age != NAN ? _age : NAN;
    }

    void SetAge(const int& Age) {
        _age = Age;
    }

    void GetChildData() {//Добавил для удобства
        cout << "Имя: " << _name << "\nФамилия: " << _surname << "\nВозраст: " << _age << endl;
    }
};
int main()
{
    setlocale(LC_ALL, "RUS");

    Children child1;
    child1.SetName("Иван");
    child1.SetSurname("Булатов");
    child1.SetAge(15);

    Children child2;
    child2.SetName("Кирилл");
    child2.SetSurname("Грилько");
    child2.SetAge(13);

    child1.GetChildData();
    cout << endl;
    child2.GetChildData();
}