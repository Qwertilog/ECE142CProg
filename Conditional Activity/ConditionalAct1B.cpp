#include <iostream>

using namespace std;

int main()
{
    int age;
    const int min = 18,
              max = 150;

    cout << "This program verifies if you are qualified to vote.\n"
         << "===================================================\n"
         << "Please enter your age: ";

    cin >> age;

    if (age >= min & age <= max)
        cout << "\nYou are qualified to vote.\n";
    else
        cout << "\nYour age is not qualified to vote.\n"
             << "Please enter a number from 18 to 150.\n";

    return 0;
}
