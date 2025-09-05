#include <iostream>
#include <string>

using namespace std;

class Komputer {
private:
    string marka;
    string model;

public:
    Komputer(string m, string mdl) : marka(m), model(mdl) {}

    string pobierz_marke() { return marka; }
    string pobierz_model() { return model; }
};

class PC : public Komputer {
private:
    string rodzaj_obudowy;

public:
    PC(string m, string mdl, string obudowa) : Komputer(m, mdl), rodzaj_obudowy(obudowa) {}

    string pobierz_obudowe() { return rodzaj_obudowy; }
};

class Laptop : public Komputer {
private:
    double przekatna_ekranu;
    string kolor_obudowy;

public:
    Laptop(string m, string mdl, double ekran, string obudowa) : Komputer(m, mdl), przekatna_ekranu(ekran), kolor_obudowy(obudowa) {}

    double pobierz_ekran() { return przekatna_ekranu; }
    string pobierz_kolor() { return kolor_obudowy; }
};

int main() {
    Laptop laptop_testowy("Dell", "Inspiron", 15.6, "czarny");
    cout << "Laptop: " << endl;
    cout << "Marka: " << laptop_testowy.pobierz_marke() << endl;
    cout << "Model: " << laptop_testowy.pobierz_model() << endl;
    cout << "Przekątna ekranu: " << laptop_testowy.pobierz_ekran() << " cali" << endl;
    cout << "Kolor obudowy: " << laptop_testowy.pobierz_kolor() << endl;

    cout << "-------------------------------" << endl;
    PC komp("a","b","slim");
    cout << "PC: " << endl;
    cout << "Marka: " << komp.pobierz_marke() << endl;
    cout << "Model: " << komp.pobierz_model() << endl;
    cout << "Rodzaj obudowy: " << komp.pobierz_obudowe() << endl;

    return 0;
}
