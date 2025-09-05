#include <iostream>

using namespace std;

class Pracownik{
public:
    static string miejsce_zat;
    static string stanowisko;
    string imie;
    string nazwisko;
    Pracownik(string, string);
    string wyswietl();
};

string Pracownik::stanowisko = "2ir";
string Pracownik::miejsce_zat = "Programista";
int main() {
    Pracownik Kacper("Kacper",".");
    Pracownik Lukasz("Lukasz",".");
    cout << endl;
    cout << Kacper.wyswietl();
    cout << Lukasz.wyswietl();
    return 0;
}

Pracownik::Pracownik(string imie, string nazwisko){
    this-> imie = imie;
    this -> nazwisko = nazwisko;
}

string Pracownik::wyswietl(){
    return "Imie: "+imie+"\nNazwisko: "+nazwisko+"\nKlasa: "+miejsce_zat+"\nZawod: "+stanowisko+"\n----------------------\n";
}