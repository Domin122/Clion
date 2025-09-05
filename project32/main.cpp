#include <iostream>
#include <string>

using namespace std;

class Uczen {
public:
    string imie;
    string nazwisko;
    int rokUrodzenia;
    string klasa;
    string grupa;
};

void pobierzDane(Uczen &uczen) {
    cout << "Podaj imię ucznia: ";
    cin >> uczen.imie;
    cout << "Podaj nazwisko ucznia: ";
    cin >> uczen.nazwisko;
    cout << "Podaj rok urodzenia ucznia: ";
    cin >> uczen.rokUrodzenia;
    cout << "Podaj klasę ucznia: ";
    cin >> uczen.klasa;
    cout << "Podaj grupę ucznia: ";
    cin >> uczen.grupa;
}

void wyswietlDane(Uczen &uczen) {
    cout << "Imię: " << uczen.imie << endl;
    cout << "Nazwisko: " << uczen.nazwisko << endl;
    cout << "Rok urodzenia: " << uczen.rokUrodzenia << endl;
    cout << "Klasa: " << uczen.klasa << endl;
    cout << "Grupa: " << uczen.grupa << endl;
}

int main() {
    Uczen uczen;
    pobierzDane(uczen);
    cout << endl << "Dane ucznia: " << endl;
    wyswietlDane(uczen);
    return 0;
}
