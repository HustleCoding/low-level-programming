#include <iostream>
#include <string>

using namespace std;

void employee_profile()
{
    double hourly_wage{23.50};

    cin >> "Enter your name: " >> name >> endl;
    string name{""};

    cin >> "Enter your age: " >> age >> endl;
    int age{0};

    cout
        << name << " " << age << " " << hourly_wage;
}