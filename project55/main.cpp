/*#include <iostream>
#include <fstream>
using namespace std;

class Plik{
public:
    string imie,nazwisko;

    void czytaj_dane();
    void zapisz_dane_do_pliku();
    void czytaj_dane_z_pliku();
};
void Plik::czytaj_dane() {
    cout << "Podaj imie:";
    cin >> imie;
    cout << "Podaj nazwisko:";
    cin >> nazwisko;
}

void Plik::zapisz_dane_do_pliku() {
    ofstream fileW("dane.txt");
    fileW << imie << " " << nazwisko;
}

void Plik::czytaj_dane_z_pliku() {
    ifstream fileR("dane.txt");
    string linia;
    while (getline(fileR, linia))
        cout << linia << endl;
}

int main() {
    Plik plik;

    plik.czytaj_dane();
    plik.zapisz_dane_do_pliku();
    plik.czytaj_dane_z_pliku();
    return 0;
}*/ //3 metody



#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Plik {
public:
    void czytaj_dane() {
        cout << "Podaj imie:";
        cin >> imie;
        cout << "Podaj nazwisko:";
        cin >> nazwisko;
    }

    void zapisz_dane_do_pliku() {
        ofstream fileW("dane.txt");
        fileW << imie << " " << nazwisko;
    }

    void czytaj_dane_z_pliku() {
        ifstream plik("dane.txt");
        if (plik.is_open()) {
            getline(plik, imie);
            plik.close();
        }
    }

    void wyswietl_dane() {
        cout<< imie << endl;

    }

private:
    string imie;
    string nazwisko;
};

int main() {
    Plik plik;

    plik.czytaj_dane();
    plik.zapisz_dane_do_pliku();
    plik.czytaj_dane_z_pliku();
    plik.wyswietl_dane();

    return 0;
}
