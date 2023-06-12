#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string fNames;
    int section;
    ifstream names;

    cout << "This program displays the First Names from a text file.\n"
         << "-------------------------------------------------------\n\n";

    do
    {
        cout << "Please choose what section would you like to see the first names: \n"
         << "1: BSECE 1A\n"
         << "2: BSECE 1B\n"
         << "Please enter the number: ";
        cin >> section;
        switch (section)
        {
        case 1:
            names.open("FirstNames1A.txt");
            cout << "\n---------------------------------------\n"
                 << "BSECE 1A First Names:\n";
            break;
        case 2:
            names.open("FirstNames1B.txt");
            cout << "\n---------------------------------------\n"
                 << "BSECE 1B First Names:\n";
            break;
        default:
            cout << "Please enter a valid input!\n\n";
            break;
        }
    } while (section < 1 || section > 2);

    while (getline(names, fNames))
    {
        cout << fNames << endl;
    }

    names.close();

    return 0;
}