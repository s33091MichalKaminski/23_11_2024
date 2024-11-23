#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Podaj liczbe elementow tablicy"<<endl;
    cin >> n;
   
        int* tab1 = new int[n];
        cout << "Podaj wartosc liczbowa elementu tablicy" << endl;
        for (int i = 0; i < n; i++) {
            cin >> tab1[i];
        }
        int maxwielo = 0;
        int maxczesto;
        for (int i = 0; i < n; i++) {
            int wielokrotnosc = 0;
            for (int j = 0; j < n; j++) {
                if (tab1[i] == tab1[j]) {
                    wielokrotnosc++;
                }
            }
            if (wielokrotnosc > maxwielo) {
                maxwielo = wielokrotnosc;
                maxczesto = tab1[i];
            }
        }
        cout << "Najczesciej wystepujacy element tablicy to: " << maxczesto << " pojawil sie:" << maxwielo << " razy" << endl;

    
    
    return 0;
}

