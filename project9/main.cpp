#include <iostream>
using namespace std;


class Pracownik {
public:
    string imie, nazwisko, stanowisko;
    string zwrocDane();
    void zwrocDane(string&,string&,string&);
    Pracownik(string,string,string);
};

class Nauczyciel:public Pracownik{
    string zwrocDane(){
        return "Nauczyciel to jest ";
    };
};


int main() {
  Pracownik mietek("Mieczyslaw","Kowalski","Kierownik sprzedazy");
  string pimie, pnazwisko, pstanowisko;
  mietek.zwrocDane(pimie,pnazwisko,pstanowisko);
  mietek.zwrocDane();
  cout << pimie << " " << pnazwisko;

    return 0;
}

string Pracownik::zwrocDane() {
    return imie+" "+nazwisko+" "+stanowisko;
}

void Pracownik::zwrocDane(string &imie, string &nazwisko, string &stanowisko) {
    this ->imie = imie;
    this ->nazwisko = nazwisko;
    this ->stanowisko = stanowisko;
}

Pracownik::Pracownik(string imie, string nazwisko, string stanowisko) {
    this ->imie = imie;
    this ->nazwisko = nazwisko;
    this ->stanowisko = stanowisko;
}
