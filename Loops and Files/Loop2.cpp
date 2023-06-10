#include <iostream>

using namespace std;

void barGraph(int sales);

int main(){

    double sales1, sales2, sales3, sales4, sales5;

    cout << "This program displays a bar graph that compares the sales of five different stores.\n"
         << "-----------------------------------------------------------------------------------\n\n";
    cout << "Currency: Philippine Peso\n"
         << "Enter today's sales for store 1: ";
    cin >> sales1;
    cout << "Enter today's sales for store 2: ";
    cin >> sales2;
    cout << "Enter today's sales for store 3: ";
    cin >> sales3;
    cout << "Enter today's sales for store 4: ";
    cin >> sales4;
    cout << "Enter today's sales for store 5: ";
    cin >> sales5;

    cout << "\n+===================================+\n"
         << "|          Sales Bar Chart          |\n"
         << "+===================================+\n"
         << "Note that: Each # represents P100.";
    cout << "\nStore 1: ";
            barGraph(sales1);
    cout << "\nStore 2: ";
            barGraph(sales2);
    cout << "\nStore 3: ";
            barGraph(sales3);
    cout << "\nStore 4: ";
            barGraph(sales4);
    cout << "\nStore 5: ";
            barGraph(sales5);

    return 0;
}

void barGraph(int sales){
    for (int runGraph = 100; runGraph <= sales; runGraph += 100)
    {
        cout << "#";
    }
}