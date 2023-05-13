#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string fName, mName, lName, address, email, cpno;
    string elem_s, elem_ys, elem_yf, eWithH;
    string sec_s, sec_ys, sec_yf, sWithH;
    string ter_s, ter_ys, ter_yf, tWithH;


    cout << "This program will create a resume. (Press ENTER if not applicable) \n" << endl;

    //Input
    //Contact Information Section
    cout << "Contact Information Form \n";
    cout << "------------------------ \n";
    cout << "Input your First Name: ";
    getline(cin, fName);
    cout << "Input your Middle Name: ";
    getline(cin, mName);
    cout << "Input your Last Name: ";
    getline(cin, lName);
    cout << "Input your Address: ";
    getline(cin, address);
    cout << "Input your Email Address: ";
    getline(cin, email);
    cout << "Input your Contact no.: ";
    getline(cin, cpno);
    cout << "\n";

    //Academic Information
    cout << "Academic Information Form \n";
    cout << "------------------------- \n";
    cout << "Elementary Education \n";
    cout << "Input your School: ";
    getline(cin, elem_s);
    cout << "Input the year you start attending this school: ";
    getline(cin, elem_ys);
    cout << "Input the year you finished or graduated in this school: ";
    getline(cin, elem_yf);
    cout << "Graduated with Honors? (Yes/No): ";
    getline(cin, eWithH);
    cout << "\n";

    cout << "Secondary Education \n";
    cout << "Input your School: ";
    getline(cin, sec_s);
    cout << "Input the year you start attending this school: ";
    getline(cin, sec_ys);
    cout << "Input the year you finished or graduated in this school: ";
    getline(cin, sec_yf);
    cout << "Graduated with Honors? (Yes/No): ";
    getline(cin, sWithH);
    cout << "\n";

    cout << "Tertiary Education \n";
    cout << "Input your School: ";
    getline(cin, ter_s);
    cout << "Input the year you start attending this school: ";
    getline(cin, ter_ys);
    cout << "Input the year you finished or graduated in this school: ";
    getline(cin, ter_yf);
    cout << "Graduated with Honors? (Yes/No): ";
    getline(cin, tWithH);

    //Output
    cout << "=========================== \n" << endl;
    cout << fName << "'s Resume \n" << endl;

    //Contact Information Section
    cout << setw(16) << "Contact Information" << endl;
    cout << setw(16) << "-------------------" << endl;
    cout << setw(16) << "First Name: " << fName << endl;
    cout << setw(16) << "Middle Name: " << mName << endl;
    cout << setw(16) << "Last Name: " << lName << endl;
    cout << setw(16) << "Address: " << address << endl;
    cout << setw(16) << "Email Address: " << email << endl;
    cout << setw(16) << "Contact Number: " << cpno << endl;
    cout << "\n";

    //Academic Information
    cout << "Academic Information" << endl;
    cout << "--------------------" << endl;
    cout << "Elementary Education:" << endl;
    cout << "     " << elem_s << " (" << elem_ys << "-" << elem_yf << ")"<< endl;
    cout << "     " << "Graduated With Honors: " << eWithH << endl;
    cout << "\n";

    cout << "Secondary Education:" << endl;
    cout << "     " << sec_s << " (" << sec_ys << "-" << sec_yf << ")"<< endl;
    cout << "     " << "Graduated With Honors: " << sWithH << endl;
    cout << "\n";

    cout << "Tertiary Education:" << endl;
    cout << "     " << ter_s << " (" << ter_ys << "-" << ter_yf << ")"<< endl;
    cout << "     " << "Graduated With Honors: " << tWithH << endl;
    cout << "\n";
}
