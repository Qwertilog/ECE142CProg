#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string fNames;

    cout << "This program displays the First Names from a text file.\n"
         << "-------------------------------------------------------\n\n";
    
    ifstream names;

    names.open("FirstNames.txt");

    cout << "BSECE 1A First Names:\n";

    while (getline(names, fNames))
    {
        cout << fNames << endl;
    }

    names.close();

    return 0;
}