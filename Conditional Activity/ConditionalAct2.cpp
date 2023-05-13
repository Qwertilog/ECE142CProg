#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num,
        x1,
        x2;
    int const min = 1,
              max = 999,
              y = 69;

    srand(time(0));
    x1 = rand() % (max - min + 1) + min;
    x2 = rand() % (max - min + 1) + min;

    cout << "This program checks if the input matches\n"
         << "a certain number assigned in the program.\n"
         << "Randomly generated numbers: "
         << x1 << ", " << x2
         << "\n-----------------------------------------\n\n"
         << "*************************************\n"
         << "* Jethro's Daily Lucky Raffle Promo *\n"
         << "*************************************\n\n"
         << "This program will pick three lucky numbers for this day:\n"
         << "1. Two random numbers ranging from 1 to 999.\n"
         << "2. A very special number.\n\n"
         << "Enter your lucky number to redeem this promo: ";
    cin >> num;

    if (num == x1 || num == x2)
        cout << "\nCongratulations! Your code matched one of today's lucky numbers.\n";
    else if (num == y)
        cout << "\nCongratulations! You found the special number.\n";
    else
        cout << "\nBetter luck next time!\n";

    return 0;
}
