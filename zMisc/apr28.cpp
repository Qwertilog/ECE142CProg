#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream inputFile;
    string name;

    inputFile.open("C:\\Users\\jethr\\OneDrive\\Desktop\\apr28.txt");

    inputFile >> name;
    cout << name << endl;
    inputFile >> name;
    cout << name << endl;
    inputFile >> name;
    cout << name << endl;
    inputFile >> name;
    cout << name << endl;
    inputFile >> name;
    cout << name << endl;
    inputFile >> name;
    cout << name << endl;
    inputFile >> name;
    cout << name << endl;
    inputFile >> name;
    cout << name << endl;
    inputFile.close();
    return 0;
}
