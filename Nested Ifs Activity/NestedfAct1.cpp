#include <iostream>

using namespace std;

int main()
{
    int grade;
    char remark;

    cout << "This program outputs the equivalent\n"
         << "grade of the user.\n"
         << "-----------------------------------\n"
         << "Please enter your grade: ";
    cin >> grade;

    if (grade >= 50 && grade <=100)
    {
        if (grade <= 60)
            remark = 'F';
        else if (grade <= 70)
            remark = 'D';
        else if (grade <= 80)
            remark = 'C';
        else if (grade <= 90)
            remark = 'B';
        else
            remark = 'A';

        cout << "\nYour equivalent grade is: "
             << remark << endl << endl;

    }
    else
        cout << "\nYour grade is out of the numerical range (50-100)\n\n";

    return 0;
}
