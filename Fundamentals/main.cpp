#include <iostream>
#include <math.h>

#define PI 3.14

using namespace std;

int main()
{
    int number;

    cout << PI << endl;

    cout << "Enter a number: ";
    cin >> number;
    cout << "Your number is " << number << endl;

    cout << sqrt(number) << endl;
}