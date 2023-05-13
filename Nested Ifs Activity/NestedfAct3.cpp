#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "This program analyzes the level of a student\n"
         << "based on their entry year.\n"
         << "--------------------------------------------\n"
         << "Enter your entry year: ";
    cin >> year;

    if (year == 2022)
        cout << "\nYou are a freshman student in this academic year.\n\n";
    else if (year == 2021)
        cout << "\nYou are a sophomore student in this academic year.\n\n";
    else if (year == 2020)
        cout << "\nYou are a junior student in this academic year.\n\n";
    else if (year == 2019)
        cout << "\nYou are a senior student in this academic year.\n\n";
    else
        cout << "\nYour entry year is categorized as an Out-of-school student.\n\n";

    return 0;
}