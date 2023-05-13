#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double gSalary, sss, pagibig, sssRate, pagibigRate, net;
    sssRate = 0.30;
    pagibigRate = 0.20;

    cout << "This program computes your net salary (SSS and Pag-Ibig deducted).\n" << endl;
    cout << "Salary Credit Rates" << endl;
    cout << setw(9) << left << "SSS" << ": 30%" << endl;
    cout << setw(9) << left << "Pag-Ibig" << ": 20%" << endl;
    cout << "\nNote that:" << endl;
    cout << "Net Salary = Gross Salary - Deductions\n" << endl;
    cout << "--------------------------------------\n" << endl;

    cout << "Input your Gross Salary: ";
    cin >> gSalary;

    sss = gSalary*sssRate;
    pagibig = gSalary*pagibigRate;
    net = gSalary - (sss + pagibig);

    cout << setprecision(2) << fixed;
    cout << "Your computed Net Salary is PHP" << net << endl;
}
