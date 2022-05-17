#include <iostream>
#include <climits>

using namespace std;

int main()
{
    cout << "sizeof information" << endl;
    cout << "===============================" << endl;

    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int: " << sizeof(int) << " bytes." << endl;

    // use values defined in <climits>
    cout << "===============================" << endl;

    cout << "Minimum values: " << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;

    // sizeof can also be used with variable names
    cout << "===============================" << endl;
    int age{21};
    cout << "age is " << sizeof(age) << " bytes." << endl;
    // or
    cout << "age is " << sizeof age << " bytes." << endl;

    double wage{22.34};
    cout << "wage is " << sizeof(wage) << " bytes." << endl;
    // or
    cout << "wage is " << sizeof wage << " bytes." << endl;
}