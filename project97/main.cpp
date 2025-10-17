#include <iostream>
#include <string>

using namespace std;

class Cezar {
private:
    string tekstJawny;
    int klucz;
public:
    Cezar(const string& tekst, int k) {
        tekstJawny = tekst;
        klucz = k;
    }

    char szyfrujZnak(char znak) {
        if (znak == ' ') return ' ';

        int base = 'a';
        int przesuniecie = ( (znak - base) + klucz ) % 26;

        if (przesuniecie < 0) przesuniecie += 26;

        return static_cast<char>(base + przesuniecie);
    }

    string szyfruj() {
        string wynik = "";
        for (char znak : tekstJawny) {
            wynik += szyfrujZnak(znak);
        }
        return wynik;
    }
};

int main() {
    string tekst;
    int klucz;

    cout << "Podaj tekst jawny (male litery i spacje): ";
    getline(cin, tekst);

    cout << "Podaj klucz szyfrowania (moze byc ujemny): ";
    cin >> klucz;


    Cezar szyfr(tekst, klucz);
    string wynik = szyfr.szyfruj();

    cout << "Zaszyfrowany tekst: " << wynik << endl;

    return 0;
}