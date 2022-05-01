#include <iostream>

using namespace std;

int main()
{
    int favorite_number; // this is where my favorite number is stored

    cout << "Enter your favorite number between 1 and 100: ";

    cin >> favorite_number;

    cout << "Amazing! That's my favorite number too!" << endl;
    cout << "No really!, " << favorite_number << " is my favorite number!" << endl;

    return 0;
}