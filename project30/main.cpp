#include <iostream>

using namespace std;

struct Data{
    int dd, mm, rr;
    string showDate(){
        return to_string(dd)+"."+to_string(mm)+"."+to_string(rr) ;
    }
};

struct Samochod{
    string marka, model;
    int rok_prod, cena;
    string nr_rejestracyjny;
    void podaj_dane();
    void wyswietl_dane();
};

void Samochod::podaj_dane(){
    cout << "Podaj markę auta: " << endl;
    cin >> marka;
    cout << "Podaj model auta: " << endl;
    cin >> model;
    cout << "Podaj rok produkcji auta: " << endl;
    cin >> rok_prod;
    cout << "Podaj cenę auta: " << endl;
    cin >> cena;
    cout << "Podaj numer rejestracyjny auta: " << endl;
    cin >> nr_rejestracyjny;

}

void Samochod::wyswietl_dane() {
    cout << endl;
    cout << "Marka: " << marka << endl << "Model: " << model << endl << "Rok produkcji: " << rok_prod<< endl  << "Cena: " << cena << endl << "Numer rejestracyjny: " << nr_rejestracyjny;
    cout << endl;
    cout << "------------------------------";
}


int main() {
    Samochod auto1;
    Samochod *auto2 = new Samochod;

   auto1.podaj_dane();
   auto1.wyswietl_dane();
   
    return 0;
}
