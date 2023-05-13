#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "This program analyzes whether the number is\n"
         << "positive or negative.\n"
         << "===========================================\n"
         << "Enter the number: ";
    cin >> num;

    if (num < 0)
        cout << endl << num << " is a negative number.\n";
    else if (num > 0)
        cout << endl << num << " is a positive number.\n";
    else
        cout << "\nYou have entered 0 or an invalid number.\n"
             << "Please restart the program.\n";

    return 0;
}
