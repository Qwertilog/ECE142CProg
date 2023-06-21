#include <iostream>
#include <iomanip>

using namespace std;

/*
Program Description:
This program does not utilize the main function to compute the total expenses of the trip. 
Instead, each expense category has its own function that performs the computation by itself
right after the user input. After all the functions were called by the main function, the
display function is then called to print out the running total that was computed by each
function.
*/

//Function prototypes
int inputValidate(int &); //Input validation for days
double inputValidate(double &); //Input validation for peso and miles driven
char inputValidate(char &); //Input validation for yes or no
void getDepartureArrivalTimes(int &, int &, int&, int&); //Function for departure and arrival times inputs
void getRoundTripFare (double &); //Function for round trip fare
void getCarRentFee (double &); //Function for car rental fee
void getMilesDriven (double &); //Function for miles driven
void getTotalParkingFee (double &, double &, double &, double &, int); //Function for parking fee
void getTotalTaxiFee (double &, double &, double &, double &, int); //Function for taxi fee
void getRegistrationFees (double &, int); //Function for registration fee
void getHotelFees (double &, double &, double &, double &, int, int); //Function for hotel fees
void getTotalMealExpenses (double &, int, int, int, double &, double &, double &); //Function for meal expenses
void displayTotals (int, int, int, int, int, double, double, double, double); //Function to display the totals

int main(){

    cout << "\t\t\t+--------------------------------------------------+\n"
         << "\t\t\t|                                                  |\n"
         << "\t\t\t|          PAMANTASAN NG LUNGSOD NG PASIG          |\n"
         << "\t\t\t|              COLLEGE OF ENGINEERING              |\n"
         << "\t\t\t|               SY2022-2023, 2ND SEM               |\n"
         << "\t\t\t|                                                  |\n"
         << "\t\t\t|                      ECE 142                     |\n"
         << "\t\t\t|               COMPUTER PROGRAMMING               |\n"
         << "\t\t\t|                      BSECE1A                     |\n"
         << "\t\t\t|                                                  |\n"
         << "\t\t\t|       GROUP MEMBERS:                             |\n"
         << "\t\t\t|               CAINGAT, JETHRO M.                 |\n"
         << "\t\t\t|               CES, JOHN AARON H.                 |\n"
         << "\t\t\t|               DIANCO, ANGELICA H.                |\n"
         << "\t\t\t|               TUYOR, REYMARVIN T.                |\n"
         << "\t\t\t|               YAMAT, PAULETTE T.                 |\n"
         << "\t\t\t|               VARGAS, MARDILYN S.                |\n"
         << "\t\t\t|                                                  |\n"
         << "\t\t\t|       SUBMITTED TO:                              |\n"
         << "\t\t\t|               ENGR. EUGENE EMBALZADO JR.         |\n"
         << "\t\t\t|                                                  |\n"
         << "\t\t\t+--------------------------------------------------+\n\n";

    cout << "\n\t\t\t---------------------------------------------------------------------\n"
         << "\t\t\tThis program calculates the total travel expenses of a business trip."
         << "\n\t\t\t---------------------------------------------------------------------\n";

    int totalDays, dHR, dMin, aHR, aMin; //Initialization of main variables
    double totalExpenses = 0, savedExpenses = 0,  totalReimbursement = 0, coveredExpenses = 0; //Initialization of running totals
    cout << "\t\t\tHow many days did you spent on the trip: ";
    inputValidate(totalDays);
    getDepartureArrivalTimes(dHR, dMin, aHR, aMin);
    getRoundTripFare (totalExpenses);
    getCarRentFee (totalExpenses);
    getMilesDriven (totalExpenses);
    getTotalParkingFee (totalExpenses, savedExpenses, totalReimbursement, coveredExpenses, totalDays);
    getTotalTaxiFee (totalExpenses, savedExpenses, totalReimbursement, coveredExpenses, totalDays);
    getRegistrationFees (totalExpenses, totalDays);
    getHotelFees (totalExpenses, savedExpenses, totalReimbursement, coveredExpenses, totalDays, aHR);
    getTotalMealExpenses (totalExpenses, dHR, aHR, aMin, savedExpenses, totalReimbursement, coveredExpenses);
    displayTotals (totalDays, dHR, dMin, aHR, aMin, 
                   totalExpenses, savedExpenses, totalReimbursement, coveredExpenses);
    return 0;
}

char YN; //Global initialization for yes or no variable (used for functions)
string description; //Global initialization for description variable (used for functions)
double feeInput; //Global initialization for input variable (used for functions)

//Below are the functions used:
//Input Validation Functions
int inputValidate (int &input){
    do
    {
        cin >> input;
        if (!cin){
            cout << "\t\t\tFatal Error! The user entered a string or a character instead of an integer.\n"
                 << "\t\t\tPlease restart the program...";
            exit(EXIT_FAILURE);
        } else if (input < 1) {
            cout << "\t\t\tError! Please enter a valid input: ";
        }
    } while (input < 1);
    return input;
}

double inputValidate (double &input){
    do
    {
        cin >> input;
        if (!cin){
            cout << "\t\t\tFatal Error! The user entered a string or a character instead of an integer.\n"
                 << "\t\t\tPlease restart the program...";
            exit(EXIT_FAILURE);
        } else if (input < 0) {
            cout << "\t\t\tError! Please enter a valid input: ";
        }
    } while (input < 0);
    return input;
}

char inputValidate (char &YN){
    bool error;
    do
    {
        cin >> YN;
        if (YN == 'Y' || YN == 'y' ||
            YN == 'N' || YN == 'n')
        {
            error = 0;
        } else {
            cout << "\t\t\tError! Please enter a valid input: ";
            error = 1;
        }
    } while (error);
    return YN;
}

int timeInputValidate (int &input){
    do
    {
        cin >> input;
        if (!cin){
            cout << "\t\t\tFatal Error! The user entered a string or a character instead of an integer.\n"
                 << "\t\t\tPlease restart the program...";
            exit(EXIT_FAILURE);
        } else if (input < 0) {
            cout << "\t\t\tError! Please enter a valid input: ";
        }
    } while (input < 0);
    return input;
}

//Time input validation
int timeHValidate (int &HR)
{
    timeInputValidate(HR);
    while (HR > 23|| HR < 0)
    {
        cout << "\t\t\tError! Please enter a valid input: ";
        cin >> HR;
    }
    return HR;

}

int timeMValidate (int &Min)
{
    timeInputValidate(Min);
    while (Min > 59 || Min < 0)
    {
        cout << "\t\t\tError! Please enter a valid input: ";
        cin >> Min;
    }
    return Min;
}

void displayTime(int HR, int Min){
    cout << right << setfill('0') << setw(2) << HR << ":" 
         << right << setfill('0') << setw(2) << Min;
}

void timeValidate (int &HR, int &Min, string description){
    do
    {
        cout << "\n\t\t\t" << description
             << "\n\t\t\t(Notice: Enter with the format of HH:MM using a 24 hour clock)"
             << "\n\t\t\tInput the hour/s: ";
        timeHValidate(HR);
        cout << "\t\t\tInput the minute/s: ";
        timeMValidate(Min);
        cout << "\t\t\tTime: ";
        displayTime(HR, Min);
        cout << "\n\t\t\tIs this the correct time?(Y/N): ";
        inputValidate(YN);
    } while (YN == 'N' || YN == 'n');
}

//Departure and arrival times function
void getDepartureArrivalTimes (int &dHR, int &dMin, int &aHR, int &aMin){
    description = "What is the time of your departure on the first day of the trip?";
    timeValidate(dHR, dMin, description);

    description = "What is the time of your arrival back home on the last day of the trip?";
    timeValidate(aHR, aMin, description);
}

//Round-trip fare function
void getRoundTripFare (double &rndTripFare){
    cout << "\n\t\t\tDid you avail any round-trip airfare? (Y/N): ";
    inputValidate(YN);
    if (YN == 'Y' || YN == 'y')
    {
        cout << "\t\t\tHow much was the round-trip airfare (Enter in PH Peso): ";
        rndTripFare = (rndTripFare + inputValidate(rndTripFare));
    }
}

//Car rent fee function
void getCarRentFee (double &carRent){
    cout << "\n\t\t\tDid you rent a car? (Y/N): ";
    inputValidate(YN);
    if (YN == 'Y' || YN == 'y')
    {
        cout << "\t\t\tHow much was the rent (Enter in PH Peso): ";
        carRent = (carRent + inputValidate(carRent));
    }
}

//Miles driven function
void getMilesDriven (double &milesDriven){
    double miles;
    cout << "\n\t\t\tDid you use a private vehicle? (Y/N): ";
    inputValidate(YN);
    if (YN == 'Y' || YN == 'y')
    {
        cout << "\t\t\tInput the amount of miles driven using the car: ";
        miles = inputValidate(miles);
        for (miles; miles >= 1; --miles)
        {
            milesDriven += 30;
        }
    }
}

//Total parking fee function
void getTotalParkingFee (double &parkingFee, double &allowed, double &excess, double &covered, int days){
    const int cut = 300;
    cout << "\n\t\t\tDid you have any parking fees?"
         << "\n\t\t\t(The company only allows up to P300 per day) (Y/N): ";
    inputValidate(YN);
    if (YN == 'Y' || YN == 'y')
    {   
        for (int ctr = 1; ctr <= days; ++ctr){
            cout << "\t\t\tHow much was the parking fee for day "
                 << ctr << " (Enter in PH Peso): ";
            feeInput = inputValidate(feeInput);
            parkingFee += feeInput;
            covered += cut;
            if (feeInput <= cut){
                allowed += feeInput;
            } else if (feeInput > cut) {
                allowed += cut;
                excess += (feeInput - cut);
            }
        }
    }
}

//Total taxi fee function
void getTotalTaxiFee (double &taxiFee, double &allowed, double &excess, double &covered, int days){
    const int cut = 500;
    cout << "\n\t\t\tDid you have any taxi fares?"
         << "\n\t\t\t(The company only allows up to P500 per day) (Y/N): ";
    inputValidate(YN);
    if (YN == 'Y' || YN == 'y')
    {   
        for (int ctr = 1; ctr <= days; ++ctr){
            cout << "\t\t\tHow much was the taxi fee for day "
                 << ctr << " (Enter in PH Peso): ";
            feeInput = inputValidate(feeInput);
            taxiFee += feeInput;
            covered += cut;
            if (feeInput <= cut){
                allowed += feeInput;
            } else if (feeInput > cut) {
                allowed += cut;
                excess += (feeInput - cut);
            }
        }
    }
}

//Total hotel fees function
void getHotelFees (double &hotelFee, double& allowed, double &excess, double &covered, int days, int aHR){
    const int cut = 5000;
    cout << "\n\t\t\tHotel Fees Expenses:"
         << "\n\t\t\t----------------------------------------------"
         << "\n\t\t\t(The company allows up to P5000 per night for lodging)\n";
    if (aHR < 18){
        for (int ctr = 1; ctr < days; ++ctr){
            cout << "\t\t\tHow much was the hotel fee for night "
                    << ctr << " (Enter in PH Peso): ";
            feeInput = inputValidate(feeInput);
            hotelFee += feeInput;
            covered += cut;
            if (feeInput <= cut){
                allowed += feeInput;
            } else if (feeInput > cut) {
                allowed += cut;
                excess += (feeInput - cut);
            }
        }
    } else {
        for (int ctr = 0; ctr < days; ++ctr){
            cout << "\t\t\tHow much was the hotel fee for night "
                    << (ctr + 1) << " (Enter in PH Peso): ";
            feeInput = inputValidate(feeInput);
            hotelFee += feeInput;
            covered += cut;
            if (feeInput <= cut){
                allowed += feeInput;
            } else if (feeInput > cut) {
                allowed += cut;
                excess += (feeInput - cut);
            }
        }
    }
    
}

//Registration fees function
void getRegistrationFees (double &registrationFee, int days){
    cout << "\n\t\t\tDid you have any conference or registration fees? (Y/N): ";
    inputValidate(YN);
    if (YN == 'Y' || YN == 'y')
    {
        cout << "\t\t\tHow much was the conference or registration fees (Enter in PH Peso): ";
        registrationFee = (registrationFee + inputValidate(registrationFee));
    }
}

//Total Meal Expenses Function
void mealCalculations (double feeInput, double type, double &covered, double &allowed, double &excess){
    covered += type;
    if (feeInput <= type){
        allowed += feeInput;
    } else if (feeInput > type){
        allowed += type;
        excess += (feeInput - type);
    }
}

void getTotalMealExpenses (double &totalExpenses, int dHR, int aHR, int aMin, double &allowed, double &excess, double &covered){
    const double breakfast = 450, lunch = 600, dinner = 800;
    cout << "\n\t\t\tDid you have a meal upon your departure flight? (Y/N): ";
    inputValidate(YN);
    if (YN == 'Y' || YN == 'y')
    {
        cout << "\t\t\tHow much was your meal? (Enter in PH Peso): ";
        inputValidate(feeInput);
        totalExpenses += feeInput;
        if (dHR < 7){
            mealCalculations(feeInput, breakfast, covered, allowed, excess);
        } else if (dHR < 12){
            mealCalculations(feeInput, lunch, covered, allowed, excess);
        } else if (dHR < 18) {
            mealCalculations(feeInput, dinner, covered, allowed, excess);
        }
    }

    cout << "\n\t\t\tDid you have a meal upon your arrival flight? (Y/N): ";
    inputValidate(YN);
    if (YN == 'Y' || YN == 'y')
    {
        cout << "\t\t\tHow much was your meal? (Enter in PH Peso): ";
        inputValidate(feeInput);
        totalExpenses += feeInput;
        if (aHR == 19 && aMin > 0) {
            mealCalculations(feeInput, dinner, covered, allowed, excess);
        } else if (aHR == 13 && aMin > 0) {
            mealCalculations(feeInput, lunch, covered, allowed, excess);
        } else if (aHR == 8 && aMin > 0) {
            mealCalculations(feeInput, breakfast, covered, allowed, excess);
        } else if (aHR > 19){
            mealCalculations(feeInput, dinner, covered, allowed, excess);
        } else if (aHR > 13){
            mealCalculations(feeInput, lunch, covered, allowed, excess);
        } else if (aHR > 8) {
            mealCalculations(feeInput, breakfast, covered, allowed, excess);
        }
    }
}

//Function for displaying the totals
void displayTotals (int totalDays, int dHR, int dMin, int aHR, int aMin, 
                    double totalExpenses, double savedExpenses, double totalReimbursement, double coveredExpenses){
    cout << "\n\t\t\t==================================================="
         << "\n\t\t\t                  Expenses Report                  "
         << "\n\t\t\t---------------------------------------------------"
         << "\n\t\t\tTotal Days on Trip: " << totalDays
         << "\n\t\t\tTime of Departure: ";
         displayTime(dHR, dMin);
    cout << "\n\t\t\tTime of Arrival: ";
         displayTime(aHR, aMin);
    cout << "\n\t\t\tTotal Expenses: P" << totalExpenses
         << "\n\t\t\tTotal Allowable Expenses: P" << coveredExpenses
         << "\n\t\t\tTotal Reimbursement: P" << totalReimbursement
         << "\n\t\t\tTotal Amount Saved: P" << savedExpenses
         << "\n\t\t\t==================================================="
         << "\n\t\t\tEND OF THE PROGRAM...";
}
