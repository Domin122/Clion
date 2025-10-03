#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int n;
    cout << "Ile wygenerować losowań? ";
    cin >> n;

    int losowania[100][6];
    int licznik[50] = {0};

    cout << "Zestawy wylosowanych liczb:\n";

    for (int i = 0; i < n; i++) {
        bool zajete[50] = {false};
        cout << "Losowanie " << i+1 << ": ";
        for (int j = 0; j < 6; j++) {
            int liczba;
            do {
                liczba = rand() % 49 + 1;
            } while (zajete[liczba]);
            losowania[i][j] = liczba;
            zajete[liczba] = true;
            licznik[liczba]++;
            cout << liczba << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= 49; i++) {
        cout << "Wystąpienia liczby " << i << ": " << licznik[i] << endl;
    }

    return 0;
}

/*  nazwa funkcji: losowanie liczb
 *  opis funkcji: funkcja ta losuje zestawy liczb od 1 do 49 w ilości wybranej przez osobe
 *  i oblicza ile ich wystąpiło
 *  paramentry:
 *  zwracany typ i opis:
 *  autor: Dominik Gabrysz
 */
