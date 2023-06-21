#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const int ROWS = 15;
const int COLUMNS = 30;

string Chart[ROWS][COLUMNS];

void SeatingChart(string [ROWS][COLUMNS]);
void Purchase(string (&)[ROWS][COLUMNS], int, int);
void SoldSeats(string [ROWS][COLUMNS]);
void Validate4(string [ROWS][COLUMNS], int, int, bool);
void SeatRow(string [ROWS][COLUMNS]);
int TotalSeat(string [ROWS][COLUMNS]);

int main()
{
    int choice, row, col, hold, total, Avail;
    ifstream inputfile;
    string line;
    bool YN;

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
         << "\t\t\t+--------------------------------------------------+\n\n"
         << "\n------------------------------------------------------------------------------"
         << "\nThis is a menu driven program that lets a user buy a seat ticket in a theater."
         << "\n------------------------------------------------------------------------------\n\n";

    srand(time(0));

    while (hold < 150)
    {
    	row = rand() % ROWS;
    	col = rand() % COLUMNS;

    	if (Chart[row][col] != "[X]")
    	{
    		Chart[row][col] = "[X]";
    		hold++;
    	}
    }

    cout << "Welcome to Theater 1A Seat Booking System";

    do
    {
        cout << "\nPlease choose a menu you want to open:"
             << "\n--------------------------------------------------\n"
             << "1. Seat Prices\n"
             << "2. Seating Chart\n"
             << "3. Purchase a Seat\n"
             << "4. Seats Sold\n"
             << "5. Seats Available in Each Row\n"
             << "6. Seats Available in the Entire Auditorium\n"
             << "7. Exit Program\n"
             << "--------------------------------------------------\n"
             << "Enter the number of your selection: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                inputfile.open("Row_Prices.txt");
                cout << "\n";
                while (getline(inputfile, line))
                {
                    cout << line << endl;
                }
                inputfile.close();
                break;

            case 2:
                SeatingChart(Chart);
                break;

            case 3:
                Validate4(Chart, row, col, YN);
                break;

            case 4:
                SoldSeats(Chart);
                break;

            case 5:
                SeatRow(Chart);
                break;

            case 6:
                total = ROWS * COLUMNS;
                Avail = total - TotalSeat(Chart);
                cout << "\n----------------------------------\n";
                cout << "Total Seats Available: "<< Avail << endl;
                cout << "----------------------------------\n";

                break;
            case 7:
                break;

            default:
                cout << "Error! Invalid Input. Please try again\n";
                break;
        }
    }
    while (choice != 7);
    cout << "Program Terminated\n";
    return 0;
}

void SeatingChart(string seat[ROWS][COLUMNS])
{
    cout << "________________________________________________"
         << "_________________________________________________\n\n";
    cout << "                                           SEATING CHART\n\n"
         << "                                            Seat number\n"
         << "\t0  0  0  0  0  0  0  0  0  1  1  1  1  1  1  1  1  1  1  2"
         << "  2  2  2  2  2  2  2  2  2  3\n";
    cout << "\t1  2  3  4  5  6  7  8  9  0  1  2  3  4  5  6  7  8  9  0  "
         << "1  2  3  4  5  6  7  8  9  0\n";
    for (int x = 0; x < 9; x++)
    {

        cout << "Row " << x + 1 << "  ";
        for (int y = 0; y < COLUMNS; y++)
        {
            if (seat[x][y] == "[X]")
                cout << right << seat[x][y];
            else
                cout << right << "[ ]";
        }
        cout << endl;
    }

    for (int x = 9; x < ROWS; x++)
    {
        cout << "Row " << x + 1 << " ";
        for (int y = 0; y < COLUMNS; y++)
        {
            if (seat[x][y] == "[X]")
                cout << right << seat[x][y];
            else
                cout << right << "[ ]";
        }
        cout << endl;
    }
    cout << "________________________________________________"
         << "_________________________________________________" << endl;
}

void Purchase(string (&Buy)[ROWS][COLUMNS], int row, int col)
{
    Buy[row-1][col-1] = "[X]";
}

void SoldSeats(string seat[ROWS][COLUMNS])
{
	cout << "The seats that is already sold are: \n";

	for(int x = 0; x < ROWS; x++)
	{
		for (int y = 0; y < COLUMNS; y++)
		{
			if (seat[x][y] == "[X]")
			cout << "Row " << x + 1 << ", Seat #" << y + 1 << endl;
		}

	}
}

void Validate4(string seat[ROWS][COLUMNS], int row, int col, bool seatSold)
{
    do
    {
        cout << "\n--------------------------------------------------\n";
        cout << "Enter the row number you want to book: ";
        cin >> row;
        cout << "Enter the seat number you want to book: ";
        cin >> col;
        cout << "--------------------------------------------------\n";

        if (row > 0 && row <= ROWS && col > 0 && col <= COLUMNS)
        {
            if (Chart[row - 1][col - 1] == "[X]")
            {
                cout << "Sorry! The selected seat is already booked.\n"
                     << "Choose another seat number.\n";
                seatSold = 1;
            }
            else if(row <= 3)
            {
                Purchase(Chart, row, col);
                 cout << "\n==================================================\n";
                cout << "You booked row " << row << " seat #" << col << endl;
                cout << "Total Bill: P500\n";
                 cout << "==================================================\n";
                seatSold = 0;
            }
            else if(row <= 6)
            {
                Purchase(Chart, row, col);
                 cout << "\n==================================================\n";
                cout << "You booked row " << row << " seat #" << col << endl;
                cout << "Total Bill: P400\n";
                 cout << "==================================================\n";
                seatSold = 0;
            }
            else if(row <= 9)
            {
                Purchase(Chart, row, col);
                 cout << "\n==================================================\n";
                cout << "You booked row " << row << " seat #" << col << endl;
                cout << "Total Bill: P350\n";
                 cout << "==================================================\n";
                seatSold = 0;
            }
            else if(row <= 12)
            {
                Purchase(Chart, row, col);
                 cout << "\n==================================================\n";
                cout << "You booked row " << row << " seat #" << col << endl;
                cout << "Total Bill: P300\n";
                 cout << "==================================================\n";
                seatSold = 0;
            }
            else if(row <= 15)
            {
                Purchase(Chart, row, col);
                 cout << "\n==================================================\n";
                cout << "You booked row " << row << " seat #" << col << endl;
                cout << "Total Bill: P275\n";
                 cout << "==================================================\n";
                seatSold = 0;
            }
        }
        else
        {
            cout << "Invalid Input! Please try again.\n";
            seatSold = 1;
        }
    } while (seatSold);
}
void SeatRow(string seat[ROWS][COLUMNS])
{
    cout << "\n";
    for (int x = 0; x < ROWS; x++)
    {
        int availseat = 0;
        for (int y = 0; y < COLUMNS; y++)
        {
            if (seat[x][y] != "[X]")
                availseat++;
        }
        cout << "----------------------------------\n";
        cout << "Row " << x + 1 << ": " << availseat << " seats available\n";
    }
        cout << "----------------------------------\n";
}
int TotalSeat(string total [ROWS][COLUMNS])
{
    int hold = 0;
	for (int x = 0; x < ROWS; x++)
	{
		for (int y = 0; y < COLUMNS; y++)
		{
			if (total[x][y] == "[X]")
			hold++;
		}
	}

	return hold;

}

