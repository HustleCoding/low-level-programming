#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, welcome to Florin's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned? ";

    int number_of_rooms{0};
    cin >> number_of_rooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of room: " << number_of_rooms << endl;
    cout << "Price per room: $" << 30 << endl;
    cout << "Cost: $" << 30 * number_of_rooms << endl;
    cout << "Tax: $" << 30 * number_of_rooms * 0.06 << endl;
    cout << "==============================================" << endl;
    cout << "Total estimate: $" << (30 * number_of_rooms) + (30 * number_of_rooms * 0.06) << endl;
    cout << "This estimate is valid for " << 30 << " days" << endl;

    cout << endl;
    return 0;
}