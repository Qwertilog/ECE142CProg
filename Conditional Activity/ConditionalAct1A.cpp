#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "This program verifies if you are qualified to vote.\n"
         << "===================================================\n"
         << "Please enter your age: ";

    cin >> age;

    if (age >= 18)
        cout << "\nYou are qualified to vote.\n";
    else
        cout << "\nYou are not yet qualified to vote.\n";

    return 0;
}
