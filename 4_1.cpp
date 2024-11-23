#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Podaj liczbe elementow tablicy"<<endl;
    cin >> n;
    int*tab1 = new int[n];
    cout << "Podaj wartosc liczbowa elementu tablicy" << endl;
    for (int i = 0; i < n; i++) {
        cin >> tab1[i];
    }
    int maxelement = tab1[0];
    for (int i = 1; i < n; i++) {
        if (tab1[i] > maxelement) {
            maxelement = tab1[i];
        }
    }
    cout << "najwiekszy element tablicy to: " << maxelement << endl;

    return 0;
}

