#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, y, z;

    cout << "This program will add two numbers. \n" << endl;
    cout << "Input your first number: ";
    cin >> x;
    cout << "Input your second number: ";
    cin >> y;

    z = x + y;

    cout << "The sum is " << z << endl;
    return 0;
}

