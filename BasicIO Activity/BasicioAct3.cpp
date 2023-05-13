#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double s1, s2, s3, ave;

    cout << "This program computes the average of three scores. \n" << endl;
    cout << "Input your first score: ";
    cin >> s1;

    cout << "Input your second score: ";
    cin >> s2;

    cout << "Input your third score: ";
    cin >> s3;

    ave = (s1 + s2 + s3)/3;

    cout << setprecision(2) << fixed << "The average of the three scores is " << ave << endl;

    return 0;
}
