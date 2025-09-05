#include <iostream>

using namespace std;

class Zwierze{
public:
    string gatunek,imie;

    Zwierze(string gatunek, string imie){
        this->gatunek=gatunek;
        this->imie=imie;
    }
    void zwierze_wyswietl(){
        cout << gatunek << "\n" << imie << "\n";
        cout << "-----------------" << "\n";
    };
};

class Zmija:Zwierze{
public:
    string dlugosc;

    Zmija(string gatunek, string imie, string dlugosc) : Zwierze(gatunek, imie) {
        this->dlugosc=dlugosc;
    }
    void zmija_wyswietl(){
        cout << gatunek << "\n" << imie << "\n";
        cout << dlugosc << "\n";
        cout << "-----------------" << "\n";
    };
};

class Rys:Zwierze{
public:
    string dlugosc,wyskokosc;

    Rys(string gatunek, string imie, string dlugosc, string wysokosc) : Zwierze(gatunek, imie) {
        this->dlugosc=dlugosc;
        this->wyskokosc=wysokosc;
    }

    void rys_wyswietl(){
        cout << gatunek << "\n" << imie << "\n";
        cout << dlugosc << "\n" << wyskokosc << "\n";
        cout << "-----------------" << "\n";
    };
};

class Orzel:Zwierze{
public:
    string dlugosc,rozpietosc_skrzydel;

    Orzel(string gatunek, string imie, string dlugosc, string rozpietosc_skrzydel) : Zwierze(gatunek, imie) {
        this->dlugosc=dlugosc;
        this->rozpietosc_skrzydel=rozpietosc_skrzydel;
    }

    void orzel_wyswietl(){
        cout << gatunek << "\n" << imie << "\n";
        cout << dlugosc << "\n" << rozpietosc_skrzydel << "\n";
        cout << "-----------------" << "\n";
    };
};

int main() {
    cout << "-----------------" << "\n";

    Zwierze *A = new Zwierze("Zwierze","Igor");
    A->zwierze_wyswietl();

    Zmija *B = new Zmija("Zmija","Patryk","100cm");
    B->zmija_wyswietl();

    Rys *C = new Rys("Rys","Kai","30cm","80cm");
    C->rys_wyswietl();

    Orzel *D = new Orzel("Orzel","Oliwier","40cm","25cm");
    D->orzel_wyswietl();
    return 0;
}
