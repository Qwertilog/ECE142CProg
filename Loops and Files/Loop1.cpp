#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int years, iterYears, iterMonth, temp;
    double ctrMonths, totalTemp, aveTemp;

    cout << "This program utilizes nested loops to collect data and calculate\n"
         << "the average temperature over a period of years.\n"
         << "----------------------------------------------------------------\n\n";

    do
    {
        cout << "Input the number of years: ";
        cin >> years;
        
        if (years < 1)
            cout << "Error! Please input a number more than 1.\n";
        
    } while (years < 1);

    for (iterYears = 1; iterYears <= years; ++iterYears)
    {
        cout << "\n===============================================\n"
             << "Year: " << iterYears << endl;
    
        for (iterMonth = 1; iterMonth <= 12; ++iterMonth)
        {
            cout << "-----------------------------------------------\n"
                 << "Year: " << iterYears
                 << " | Month: " << iterMonth << endl
                 << "Input the temperature this month in Celsius: ";
            cin >> temp;
            
            totalTemp += temp;
            ctrMonths++;
        } 
    }

    aveTemp = totalTemp / ctrMonths;

    cout << "\n===============================================\n"
         << "\nTotal Number of Months: " << ctrMonths
         << "\nTotal Temperature in Celsius: " << totalTemp
         << "\nAverage Temperature per Month: " 
         << setprecision(2) << fixed << aveTemp << "C" << endl
         << "\n===============================================\n";
    
    return 0;
}