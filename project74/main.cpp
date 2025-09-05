#include <iostream>
using namespace std;

class Towar{
public:
    string nazwa,cena,ilosc;
    virtual void opis(){
        cout << "Nazwa: " << nazwa << "\nCena: " << cena << "\nIlość: " << ilosc << endl << endl;
    }
};

class Gwozdzie:public Towar{
public:
    string dlugosc,grubosc,rodzaj_lepka;
    void opis() override;
};

void Gwozdzie::opis() {
    Towar::opis();
}

class papier_scierny:public Towar{
public:
    string ziarnistosc,szerokosc;
    void opis() override;
};

void papier_scierny::opis() {
    Towar::opis();
}

class meble:public Towar{
public:
    string kolekcja;
    void opis() override;
};

void meble::opis() {
    Towar::opis();
}

int main() {

    return 0;
}
