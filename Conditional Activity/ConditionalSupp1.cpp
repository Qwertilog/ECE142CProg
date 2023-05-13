#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int age,
        chct;
    double height,
           weight,
           bmi,
           undrvar,
           heavar,
           ovrvar;

    cout << "This program computes the BMI using Height, Weight,\n"
         << "and the Age of a male person.\n"
         << "===================================================\n";

    cout << "Enter your height in cm: ";
    cin >> height;
    cout << "Enter your weight in kg: ";
    cin >> weight;
    cout << "Enter your age: ";
    cin >> age;

    height = height / 100;
    bmi = weight / pow(height, 2);

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
         << "\nYour calculated BMI is " << setprecision(1) << fixed << bmi << endl;

    if (age >= 17 && age <= 19){
        chct = 1;
        undrvar = 18;
        heavar = 25.5;
        ovrvar = 29;
    }
    else if (age >= 14 && age <= 16){
        chct = 1;
        undrvar = 16.5;
        heavar = 23.5;
        ovrvar = 27;
    }
    else if (age >= 11 && age <= 13){
        chct = 1;
        undrvar = 15;
        heavar = 21;
        ovrvar = 24.3;
    }
    else if (age >= 8 && age <= 10){
        chct = 1;
        undrvar = 14;
        heavar = 18.5;
        ovrvar = 21;
    }
    else if (age >= 5 && age <= 7){
        chct = 1;
        undrvar = 13.9;
        heavar = 17;
        ovrvar = 18.5;
    }
    else if (age >= 2 && age <= 4){
        chct = 1;
        undrvar = 14;
        heavar = 17.5;
        ovrvar = 18.5;
    }

    if (chct == 1)
        cout << "\nBMI Categories Chart for Child and Teen (ages below 20 years old)\n"
             << "                    *CDC Percentile Chart*\n"
             << "       +----------------+-----------------------------+\n"
             << "       |    Category    |   Percentile (BMI-to-Age)   |\n"
             << "       |----------------+-----------------------------|\n"
             << "       |   Underweight  |  less than 5th percentile   |\n"
             << "       |     Normal     |   5th to 85th percentile    |\n"
             << "       |   Overweight   |  86th to 95th percentile    |\n"
             << "       |     Obese      |  more than 95th percentile  |\n"
             << "       +----------------+-----------------------------+\n\n";

    if (chct == 1 && bmi < undrvar)
        cout << "Based on your calculated BMI, you are categorized as "
             << "Underweight\n";
    else if (chct == 1 && bmi < heavar)
        cout << "Based on your calculated BMI, you are categorized as "
             << "Normal\n";
    else if (chct == 1 && bmi < ovrvar)
        cout << "Based on your calculated BMI, you are categorized as "
             << "Overweight\n";
    else if (chct == 1 && bmi >= ovrvar)
        cout << "Based on your calculated BMI, you are categorized as "
             << "Obese\n";
    else
        cout << "\nBMI Categories Chart for Adults (20 years old or older)\n"
             << "       +--------------------+------------------+\n"
             << "       |   Calculated BMI   |     Category     |\n"
             << "       |--------------------+------------------|\n"
             << "       |   less than 18.5   |    Underweight   |\n"
             << "       |    18.5 to 24.9    |      Normal      |\n"
             << "       |     25 to 29.9     |    Overweight    |\n"
             << "       |    30 and above    |      Obese       |\n"
             << "       +--------------------+------------------+\n\n";

    if (age >= 20 && bmi < 18.5)
        cout << "Based on your calculated BMI, you are categorized as "
             << "Underweight\n";
    else if (age >= 20 && bmi < 25)
        cout << "Based on your calculated BMI, you are categorized as "
             << "Normal\n";
    else if (age >= 20 && bmi < 30)
        cout << "Based on your calculated BMI, you are categorized as "
             << "Overweight\n";
    else if (age >= 20 && bmi >= 30)
        cout << "Based on your calculated BMI, you are categorized as "
             << "Obese\n";

    return 0;
}
