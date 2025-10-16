#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Table {
private:
    int* tablica;
    int liczbaElementow;

public:
    Table(int rozmiar) {
        liczbaElementow = rozmiar;
        tablica = new int[liczbaElementow];
        srand(time(nullptr));
        for (int i = 0; i < liczbaElementow; i++) {
            tablica[i] = rand() % 1000 + 1;
        }
    }

    ~Table() {
        delete[] tablica;
    }

    void WyswietlElementy() const {
        for (int i = 0; i < liczbaElementow; i++) {
            cout << i << ": " << tablica[i] << endl;
        }
    }

    int ZnajdzWartosc(int wartosc) const {
        for (int i = 0; i < liczbaElementow; i++) {
            if (tablica[i] == wartosc) {
                return i;
            }
        }
        return -1;
    }

    int WyswietlNieparzyste() const {
        cout << "Liczby nieparzyste:" << endl;
        int licznik = 0;
        for (int i = 0; i < liczbaElementow; i++) {
            if (tablica[i] % 2 != 0) {
                cout << tablica[i] << endl;
                licznik++;
            }
        }
        return licznik;
    }

    double ObliczSrednia() const {
        long suma = 0;
        for (int i = 0; i < liczbaElementow; i++) {
            suma += tablica[i];
        }
        return static_cast<double>(suma) / liczbaElementow;
    }
};

int main() {
    int rozmiar = 50;
    Table tab(rozmiar);

    tab.WyswietlElementy();

    int szukana;
    cout << "\nPodaj wartosc do wyszukania: ";
    cin >> szukana;

    int indeks = tab.ZnajdzWartosc(szukana);
    if (indeks != -1) {
        cout << "Wartosc " << szukana << " znaleziona na indeksie " << indeks << "." << endl;
    }

    cout << endl;
    int liczbaNieparzystych = tab.WyswietlNieparzyste();
    cout << "Razem nieparzystych: " << liczbaNieparzystych << endl;

    double srednia = tab.ObliczSrednia();
    cout << "Srednia wszystkich elementow: " << static_cast<int>(srednia) << endl;

    return 0;
}