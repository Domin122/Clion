#include <iostream>
using namespace std;

class Pracownik{
public:
    string imie,nazwisko,stanowisko;
    string zwrocDane() const;
    void zwrocDane(string&,string&,string&);
};
class Nauczyciel:public Pracownik{
public:
    string przedmiot;
    string zwrocDane() const;
};

class Wychowawca:public Nauczyciel{
    string oddzial;
    string zwrocDane() const;
};

string Wychowawca::zwrocDane() const {
    return Nauczyciel::zwrocDane() + ' ' + oddzial;
}

string Nauczyciel::zwrocDane() const {
    return Pracownik::zwrocDane() + ' ' +przedmiot;
}


string Pracownik::zwrocDane() const {
    return imie + ' ' + nazwisko + ' ' + stanowisko;
}

void Pracownik::zwrocDane(string &pimie, string &pnazwisko, string &pstanowisko) {
    imie = pimie;
    nazwisko = pnazwisko;
    stanowisko = pstanowisko;
}

int main() {
    Pracownik antek;
    antek.zwrocDane((string&)"Antek",(string&)"Nowak",(string&)"Księgowy");
    Nauczyciel kamil = {{"Kamil", "Sobczak", "Nauczyciel"}, "Programowanie"};
    cout << kamil.zwrocDane();
    return 0;
}
