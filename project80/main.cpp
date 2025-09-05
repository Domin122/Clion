#include <iostream>

using namespace std;

struct Adres{
    string ulica,nr_bud,nr_lok,kod_pocz,miejsc;
};

struct Sportowiec{
    Adres adres;
public:
    string imie,nazwisko;
    void show();
};

struct Biegacz:public Sportowiec{
public:
    int nr_buta;
    string rozm_koszulki;
    void show();
};

struct Rowerzysta:public Sportowiec{
public:
    int ilosc_rowerow;
    string rodz_roweru;
    void show();
};

struct Szosowy:public Rowerzysta{
public:
     string rozm_ramy,rozm_kol,do_czego_sluzy;
    void show();
};

struct MTB:public Rowerzysta{
public:
    string rozm_ramy,rozm_kol,do_czego_sluzy;
    void show();
};

struct Torowy:public Rowerzysta{
public:
    string rozm_ramy,rozm_kol,do_czego_sluzy;
    void show();
};

void Sportowiec::show() {
    cout << "\n--------------------------------------------\n";
    cout << "Imie i Nazwisko: " << imie << " " << nazwisko << endl;
    cout << "Adres:\n";
    cout << "Ulica: " << adres.ulica << endl;
    cout << "Nr Budynku: " << adres.nr_bud << endl;
    cout << "Nr Lokalu: " << adres.nr_lok << endl;
    cout << "Kod Pocztowy: " << adres.kod_pocz << endl;
    cout << "Miejscowość: " << adres.miejsc;
}

void Biegacz::show() {
    Sportowiec::show();
    cout << "Nr Buta: " << nr_buta << endl;
    cout << "Rozmiar Koszulki: " << rozm_koszulki;
}

void Rowerzysta::show() {
    Sportowiec::show();
    cout << "Ilość Rowerów: " << ilosc_rowerow << endl;
    cout << "Rodzaj Roweru: " << rodz_roweru;
}

void Szosowy::show() {
    Rowerzysta::show();
    cout << "Rozmiar ramy: " << rozm_ramy << endl;
    cout << "Rozmiar kół: " << rozm_kol << endl;
    cout << "Do czego służy: " << do_czego_sluzy;
}

void MTB::show() {
    Rowerzysta::show();
    cout << "Rozmiar ramy: " << rozm_ramy << endl;
    cout << "Rozmiar kół: " << rozm_kol << endl;
    cout << "Do czego służy: " << do_czego_sluzy;
}

void Torowy::show() {
    Rowerzysta::show();
    cout << "Rozmiar ramy: " << rozm_ramy << endl;
    cout << "Rozmiar kół: " << rozm_kol << endl;
    cout << "Do czego służy: " << do_czego_sluzy;
}


int main() {

    return 0;
}
