#include <iostream>
#include <unordered_map>

using namespace std;

int naArabskie(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int rzymskaNaLiczbe(string rzymska) {
    int wynik = 0;
    int poprzedniaWartosc = 0;

    for (int i = rzymska.size() - 1; i >= 0; --i) {
        int obecnaWartosc = naArabskie(rzymska[i]);

        if (obecnaWartosc < poprzedniaWartosc) {
            wynik -= obecnaWartosc;
        } else {
            wynik += obecnaWartosc;
        }

        poprzedniaWartosc = obecnaWartosc;
    }

    return wynik;
}

string naRzymskie(int liczba) {
    string wynik;
    const int wartosci[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const string numery[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; ++i) {
        while (liczba >= wartosci[i]) {
            wynik += numery[i];
            liczba -= wartosci[i];
        }
    }
    return wynik;
}

int main() {
    cout << "Rzymskie na Arabskie: " << rzymskaNaLiczbe("XII") << endl;
    cout << "Arabskie na Rzymskie: " << naRzymskie(12) << endl;

    return 0;
}
