#include <iostream>
using namespace std;

class Osoba{
protected:
    int pesel;
public:
    string imie,nazwisko;
    Osoba(string,string,int);
    Osoba() {}
    Osoba(Osoba&);
    void pokazDane1();
};

class Pracownik:public Osoba{
    Pracownik(string imie, string nazwisko, int pesel, string stanowisko, string wydzial, double pensja);
    double pensja;
public:
    string stanowisko,wydzial;
    void pokazDane();
};

Pracownik::Pracownik(string imie,string nazwisko,int pesel,string stanowisko,string wydzial,double pensja){
    Osoba::imie = imie;
    Osoba::nazwisko = nazwisko;
    Osoba::pesel = pesel;
    Pracownik::stanowisko = stanowisko;
    Pracownik::wydzial = wydzial;
    Pracownik::pensja = pensja;
}

void Pracownik::pokazDane() {
    cout <<"Stanowisko: " << stanowisko << endl<< "Wydział: " << wydzial << endl << "Pensja: "<< pensja << endl;
    cout << "-----------------------" << endl;
}

Osoba::Osoba(string imie,string nazwisko,int pesel) {
    Osoba::imie = imie;
    Osoba::nazwisko = nazwisko;
    Osoba::pesel = pesel;
}

Osoba::Osoba(Osoba &os) {
    os.imie = imie;
    os.nazwisko = nazwisko;
    os.pesel = pesel;
}

void Osoba::pokazDane1() {
    cout <<"Imie: " << imie << endl<< "Nazwisko: " << nazwisko << endl << "Pesel: "<< pesel << endl;
}


int main() {
    Pracownik Antek("Obsługa Dźwigu","Budownictwo",10000);
    Pracownik Marysia("Księgowa","Księgowość",10000);
    Antek.pokazDane();
    Marysia.pokazDane();



    return 0;
}
