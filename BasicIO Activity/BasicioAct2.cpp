#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double r, A;

    cout << "This program computes the area of a circle. \n" << endl;
    cout << "Input radius: ";
    cin >> r;

    A = M_PI*pow(r, 2.0);

    cout << setprecision(2) << fixed << "The area of the circle is " << A << endl;

    return 0;
}
