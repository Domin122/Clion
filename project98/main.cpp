#include <iostream>
#include <string>
using namespace std;

class Film {
protected:
    string tytul;
    int liczbaWypozyczen;

public:
    Film() {
        tytul = "";
        liczbaWypozyczen = 0;
    }

    void setTytul(const string& nowyTytul) {
        if (nowyTytul.length() <= 20)
            tytul = nowyTytul;
        else
            cout << "Tytul zbyt dlugi! Maks. 20 znakow." << endl;
    }

    string getTytul() const {
        return tytul;
    }

    int getLiczbaWypozyczen() const {
        return liczbaWypozyczen;
    }

    void zwiekszLiczbeWypozyczen() {
        liczbaWypozyczen++;
    }
};

int main() {
    Film film1;

    cout << "=== Test klasy Film ===" << endl;
    cout << "Poczatkowy tytul: \"" << film1.getTytul() << "\"" << endl;
    cout << "Poczatkowa liczba wypozyczen: " << film1.getLiczbaWypozyczen() << endl;

    film1.setTytul("Incepcja");
    cout << "\nPo ustawieniu tytulu:" << endl;
    cout << "Tytul: " << film1.getTytul() << endl;

    cout << "\nLiczba wypozyczen przed inkrementacja: " << film1.getLiczbaWypozyczen() << endl;
    film1.zwiekszLiczbeWypozyczen();
    cout << "Liczba wypozyczen po inkrementacji: " << film1.getLiczbaWypozyczen() << endl;

    return 0;
}