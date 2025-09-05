#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Muza {
public:
    string wykonawcy, nazwa_albumu, ilosc_utworow, rok_wyjscia, ilosc_pobran;

    Muza(string wyk, string naz, string utw, string rok, string pobr)
            : wykonawcy(wyk), nazwa_albumu(naz), ilosc_utworow(utw), rok_wyjscia(rok), ilosc_pobran(pobr) {}

    void show() const {
        cout << "Wykonawcy: " << wykonawcy << endl;
        cout << "Nazwa albumu: " << nazwa_albumu << endl;
        cout << "Ilość utworów: " << ilosc_utworow << endl;
        cout << "Rok wyjścia: " << rok_wyjscia << endl;
        cout << "Ilość pobrań: " << ilosc_pobran << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    string filePath = "/Users/dominik.gabrysz/Documents/czerwiec2024/data2.txt";
    ifstream data(filePath);

    if (!data) {
        cerr << "BŁĄD: nie udało się otworzyć pliku: " << filePath << endl;
        return 1;
    }

    vector<Muza> albumy;
    string linia;
    int lineCounter = 0;

    string wykonawcy, nazwa_albumu, ilosc_utworow, rok_wyjscia, ilosc_pobran;

    while (getline(data, linia)) {
        lineCounter++;

        switch (lineCounter % 5) {
            case 1:
                wykonawcy = linia;
                break;
            case 2:
                nazwa_albumu = linia;
                break;
            case 3:
                ilosc_utworow = linia;
                break;
            case 4:
                rok_wyjscia = linia;
                break;
            case 0:
                ilosc_pobran = linia;

                albumy.emplace_back(wykonawcy, nazwa_albumu, ilosc_utworow, rok_wyjscia, ilosc_pobran);

                wykonawcy = nazwa_albumu = ilosc_utworow = rok_wyjscia = ilosc_pobran = "";
                break;
        }
    }

    data.close();

    if (albumy.empty()) {
        cerr << "Plik został poprawnie otwarty, ale nie znaleziono poprawnych danych." << endl;
        return 1;
    }

    // Wyświetlamy dane
    cout << "Dane z pliku:" << endl;
    for (const auto& album : albumy) {
        album.show();
    }

    return 0;
}