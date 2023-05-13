#include <iostream>

using namespace std;

int main()
{
    int num,
        x;

    cout << "This program analyzes whether the number is\n"
         << "odd or even.\n"
         << "===========================================\n"
         << "Enter the number: ";
    cin >> num;

    x = num % 2;

    if (x == 0)
        cout << endl << num << " is an even number.\n";
    else
        cout << endl << num << " is an odd number.\n";

    return 0;
}
