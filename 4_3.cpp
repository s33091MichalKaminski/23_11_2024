#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{   
    int tab1[10][10] = { 0 };

    for (int i = 0; i < 10; i++) {
        tab1[i][0] = i;
        tab1[i][1] = i + i;
        tab1[i][2] = i * i;
        tab1[i][3] = i + 2;
        tab1[i][4] = i - 4;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << tab1[i][j]<<"\t";
        }
        cout << endl;
    }
    return 0;
}

