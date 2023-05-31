#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;
    string name[ARRAY_SIZE];
    int count;
    ifstream inputFile;

    inputFile.open("name.txt");

    while (count < ARRAY_SIZE && inputFile >> name[count])
        count++;

    inputFile.close();

    cout << "The names are: ";

    for (count = 0; count < ARRAY_SIZE; count++)
        cout << name[count] << count << " ";
        cout << endl;

    return 0;
}