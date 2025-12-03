#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

int sumaCyfr(int x) {
    int suma = 0;
    while (x > 0) {
        suma += x % 10;
        x /= 10;
    }
    return suma;
}

int main() {
    ifstream plik("liczby.txt");

    if (!plik.is_open()) {
        cerr << "Nie mozna otworzyc pliku!" << endl;
        return 1;
    }

    int x;
    int parzyste = 0, nieparzyste = 0;
    int minimum = INT_MAX, maksimum = INT_MIN;
    int licznikSuma20 = 0;

    while (plik >> x) {
        // a) parzyste i nieparzyste
        if (x % 2 == 0)
            parzyste++;
        else
            nieparzyste++;

        // b) min i max
        if (x < minimum) minimum = x;
        if (x > maksimum) maksimum = x;

        // c) suma cyfr > 20
        if (sumaCyfr(x) > 20)
            licznikSuma20++;
    }

    plik.close();

    // Wyniki:
    cout << "Parzyste: " << parzyste << endl;
    cout << "Nieparzyste: " << nieparzyste << endl;

    cout << "Min: " << minimum << endl;
    cout << "Max: " << maksimum << endl;

    cout << "Liczb z suma cyfr większą niż 20: " << licznikSuma20 << endl;

    return 0;
}