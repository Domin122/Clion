#include <iostream>

using namespace std;

class Osoba{
protected:
    string imie,nazwisko;
public:
    Osoba(string,string);
    void getData(){
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
    }
};

Osoba::Osoba(string imie, string nazwisko) {
    this->imie=imie;
    this->nazwisko=nazwisko;
}

class Pracownik:Osoba{
    double pensja;
public:
    string stanowisko;
    Pracownik(double ,string,string,string);
    void getData(){
        Osoba:getData();
        cout << "Pensja: " << pensja << endl;
        cout << "Stanowisko: " << stanowisko << endl;
    }
};

Pracownik::Pracownik(double pensja, string stanowisko, string imie, string nazwisko):
        Osoba(imie,nazwisko) {
    this->pensja=pensja;
    this->stanowisko=stanowisko;
}


class Dyrektor:Pracownik{
public:
    string szkola;
    int ilosc_nauczycieli;
    Dyrektor(string,int,string,string,double,string);
    void getData(){
        Pracownik:getData();
        cout << "Szkoła: " << szkola << endl;
        cout << "Ilość nauczycieli: " << ilosc_nauczycieli << endl;
    }
};

Dyrektor::Dyrektor(string szkola, int ilosc_naucz, string imie, string nazwisko,
 double pensja, string stanowisko):Pracownik(pensja,stanowisko,imie,nazwisko) {
    this->szkola=szkola;
    this->ilosc_nauczycieli=ilosc_naucz;
}

class Nauczyciel:Pracownik{
public:
    string przedmiot,klasy;
    Nauczyciel(string,string,string,string,double,string);
    void getData(){
        Pracownik:getData();
        cout << "Przedmiot: " << przedmiot << endl;
        cout << "Klasy: " << klasy << endl;
    }
};

Nauczyciel::Nauczyciel(string przedmiot, string klasy, string imie, string nazwisko,
double pensja, string stanowisko):Pracownik(pensja,stanowisko,imie,nazwisko) {
    this->przedmiot=przedmiot;
    this->klasy=klasy;
}

class Wychowawca:Pracownik{
public:
    string klasa,przedmiot;
    Wychowawca(string,string,string,string,double,string);
    void getData(){
        Pracownik:getData();
        cout << "Klasa: " << klasa << endl;
        cout << "Przedmiot: " << przedmiot << endl;
    }
};

Wychowawca::Wychowawca(string klasa, string przedmiot, string imie, string nazwisko,
double pensja, string stanowisko):Pracownik(pensja,stanowisko,imie,nazwisko) {
    this->klasa=klasa;
    this->przedmiot=przedmiot;
}


int main() {
    Pracownik Jakub(5000,"a","a","a");
    Dyrektor Maciej("a",15,"a","a",10000,"a");
    Nauczyciel Olaf("a","a","a","a",8000,"a");
    Wychowawca Mateusz("a","a","a","a",8000,"a");

    Jakub.getData();
    Maciej.getData();
    Olaf.getData();
    Mateusz.getData();

    return 0;
}

