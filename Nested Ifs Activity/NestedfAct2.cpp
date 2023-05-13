#include <iostream>

using namespace std;

int main ()
{   
    char letter;
    int ascii;
    string color;

    cout << "This program analyzes whether the letter\n"
         << "matches a color.\n"
         << "----------------------------------------\n"
         << "Please enter the letter: ";
    cin >> letter;

    ascii = letter;

    if (ascii >= 65 && ascii <=90 || ascii >= 97 && ascii <= 122)
    {
        if (letter == 'B' || letter == 'b')
            color = "Blue";
        else if (letter =='R' || letter == 'r')
            color = "Red";
        else if (letter == 'G' || letter == 'g')
            color = "Green";
        else if (letter == 'Y' || letter == 'y')
            color = "Yellow";
        else
        {
            cout << "\nUnknown color.\n\n";
            return 0;
        }
    }
    else
    {
        cout << "\nPlease enter a valid letter.\n\n";
        return 0;
    }
    

    cout << "\nThe color is "
         << color << "\n\n";

    return 0;
}
