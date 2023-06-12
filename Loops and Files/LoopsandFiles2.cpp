#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main (){

    double annRate, monRate, balance, months, deposit, runDeposit, withdraw, runWithdraw, interest, runInterest;

    cout << "This program calculates the balance of a savings account.\n"
         << "-------------------------------------------------------------------\n\n";
    
    cout << "Input the annual interest rate (in percent 0.00): ";
    cin >> annRate;
    cout << "Input your account's starting balance: ";
    cin >> balance;
    cout << "How many months have passed since the account was established: ";
    cin >> months;
    cout << "\n===================================================================\n";

    annRate = annRate / 100;
    monRate = (annRate / 12);

    for (int ctrInput = 1; ctrInput <= months; ++ctrInput)
    {
        do
        {
            cout << "Enter the amount deposited for month #" << ctrInput
                 << ": ";
            cin >> deposit;

            if (deposit < 0)
                cout << "Error! Please input a positive number.";
        } while (deposit < 0);
        runDeposit += deposit;
        balance += deposit;

        do
        {
            cout << "Enter the amount withdrawn for month #" << ctrInput
                 << ": ";
            cin >> withdraw;

            if (withdraw < 0)
                cout << "Error! Please input a positive number.";
        } while (withdraw < 0);
        runWithdraw += withdraw;
        balance -= withdraw;

        interest = balance * monRate;
        balance += interest;
        runInterest += interest;

        cout << "----------------------------------------------------\n";

        if (balance < 0)
        {
            cout << "Notice: The calculated balance went below zero! The account has now been closed.";
            break;
        }
    }

    cout << "\n====================================================\n"
         << "Total Balance: " << setprecision(2) << fixed << balance << endl
         << "Total Amount of Deposits: " << runDeposit << endl
         << "Total Amount of Withdrawals: " << runWithdraw << endl
         << "Total Interests Earned: " << runInterest << endl
         << "====================================================\n"
         << "Notice: This report has been printed to BalanceReport.txt\n\n";

    ofstream report;
    report.open("BalanceReport.txt");

    report << "Total Balance: P" << setprecision(2) << fixed << balance << endl
           << "Total Amount of Deposits: P" << runDeposit << endl
           << "Total Amount of Withdrawals: P" << runWithdraw << endl
           << "Total Interests Earned: P" << runInterest;

    report.close();

    return 0;
}