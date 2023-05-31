#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int i = 0;
    while (i < 10) {
        if (i == 4) {
            i++;
            continue;
        }
        cout << i << "\n";
        i++;
    }
    return 0;
}