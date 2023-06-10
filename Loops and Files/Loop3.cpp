#include <iostream>

using namespace std;

int main(){
    
    int side;

    cout << "This program displays a square based on the given side of the user.\n"
         << "-------------------------------------------------------------------\n\n";
    
    do
    {
        cout << "Input the side of the square: ";
        cin >> side;

        if (side <= 0 || side > 15)
            cout << "Error! Please input another positive number not greater than 15.\n";
        
    } while (side <= 0 || side > 15);

    cout << "\n===============================\n"
         << "Generated " << side << " x " << side << " Square:\n";
         
    for (int runRow = 1; runRow <= side; ++runRow)
    {
        for (int runSide = 1; runSide <= side; ++runSide)
        {
            cout << "X";
        }
        cout << endl;
    }
    
    return 0;
}