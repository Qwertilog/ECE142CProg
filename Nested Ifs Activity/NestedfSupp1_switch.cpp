#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int flv,
        sze;
    char snr;
    string size,
           flavor;
    double price;

    cout << "This is program computes the user's total bill based on\n"
         << "their choice of pizza.\n"
         << "----------------------------------------------------------\n\n";

    cout << "**********************************************************\n"
         << "*      Welcome to Jethro's Pizzeria Ordering Kiosk!      *\n"
         << "**********************************************************\n\n"
         << "To start ordering, please choose the size of your pizza:\n"
         << "      Size              Price\n"
         << "1. Small          Starts at PHP65.00\n"
         << "2. Regular        Starts at PHP95.00\n"
         << "3. Large          Starts at PHP130.00\n"
         << "4. Extra Large    Starts at PHP185.00\n\n"
         << "Enter the number you want to choose: ";
    cin >> sze;

    switch (sze)
    {
        case 1:
            price += 65.00;
            size = "Small Pizza......................PHP65.00";
            break;
        case 2:
            price += 95.00;
            size = "Regular Pizza....................PHP95.00";
            break;
        case 3:
            price += 130.00;
            size = "Large Pizza......................PHP130.00";
            break;
        case 4:
            price += 185.00;
            size = "Extra Large Pizza................PHP185.00";
            break;
        default:
            cout << "\nPlease choose a valid number.\n";
            return 0;
    }

    cout << "\n-------------------------------------------------"
         << "\nYour current order is:\n"
         << "    " << size
         << "\n\nTotal price: PHP"
         << setprecision(2) << fixed
         << price << endl
         << "-------------------------------------------------\n"
         << "\nPlease choose the flavor of your pizza:\n"
         << "           Flavor                  Price\n"
         << "1. Regular Ham and Cheese      Add PHP0.00\n"
         << "2. Pepperoni                   Add PHP25.00\n"
         << "3. Hawaiian                    Add PHP30.00\n"
         << "4. Bacon and Mushroom BBQ      Add PHP55.00\n\n"
         << "Enter the number you want to choose: ";
    cin >> flv;

    switch (flv)
    {
        case 1:
            flavor = "Regular Ham and Cheese Flavor....PHP0.00";
            break;
        case 2:
            price += 25.00;
            flavor = "Pepperoni Flavor.................PHP25.00";
            break;
        case 3:
            price += 30.00;
            flavor = "Hawaiian Flavor..................PHP30.00";
            break;
        case 4:
            price += 55.00;
            flavor = "Bacon and Mushroom BBQ Flavor....PHP55.00";
            break;
        default:
            cout << "\nPlease choose a valid number.\n";
            return 0;
    }

    cout << "\n-------------------------------------------------"
         << "\nYour current order is:\n"
         << "    " << size
         << "\n    " << flavor
         << "\n\nTotal price: PHP"
         << setprecision(2) << fixed
         << price << endl
         << "-------------------------------------------------\n"
         << "\nDo you have a Senior Citizen Card?\n"
         << "Enter (y/Y) if YES or (n/N) if NO: ";
    cin >> snr;

    if (snr == 'y' || snr == 'Y')
        {
            cout << "\n================================================="
                 << "\nYour final pizza order is:\n"
                 << "    " << size
                 << "\n    " << flavor
                 << "\n\nTotal Price:"
                 << "\n    PHP"
                 << setprecision(2) << fixed
                 << price << endl;

                 price -= (price * 0.10);

            cout << "\nDeductions:"
                 << "\n    Senior Citizen Discount (10%)"
                 << "\n\nDiscounted Price:"
                 << "\n    PHP"
                 << setprecision(2) << fixed
                 << price << endl
                 << "\nPlease proceed to the counter for payment.\n"
                 << "=================================================\n";
        }
    else if (snr == 'n' || snr == 'N')
        cout << "\n================================================="
             << "\nYour final pizza order is:\n"
             << "    " << size
             << "\n    " << flavor
             << "\n\nTotal Price:"
             << "\n    PHP"
             << setprecision(2) << fixed
             << price << endl
             << "\nPlease proceed to the counter for payment.\n"
             << "=================================================\n";
    else
        cout << "\nPlease enter a valid character.\n";
    return 0;
}