#include <iostream>
using namespace std;

class Uczen{
private:
    string imie,nazwisko;
    string data_ur;
    int klasa,grupa;;

public:
    void wprowadz_dane(){
        cout<< "Podaj imie: ";
        cin >> imie;
        cout<< "Podaj nazwisko: ";
        cin >> nazwisko;
        cout<< "Podaj datę urodzenia: ";
        cin >> data_ur;
        cout<< "Podaj klasę: ";
        cin >> klasa;
        cout<< "Podaj grupę: ";
        cin >> grupa;
    }

    void wyswietl_dane(){
        cout << "Imie i nazwisko: " << imie << " " << nazwisko  << endl << "Data urodzenia: " <<data_ur << endl;
        cout << "Klasa: " << klasa << " Grupa: " << grupa;
    }
};

int main() {
    Uczen Dominik;
    Dominik.wprowadz_dane();
    Dominik.wyswietl_dane();
    return 0;
}
