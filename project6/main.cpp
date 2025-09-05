#include <iostream>
using namespace std;


class osoba{
private:
    string imie, nazwisko;
public:
    void ustaw(string imie,string nazwisko){
        this-> imie = imie;
        this-> nazwisko = nazwisko;
    }
    void wyswietl();
};


void osoba::wyswietl(){
    cout<< "Imie: "<< imie <<"\nNazwisko: "<< nazwisko <<"\n------------------------";
}

int main() {
    osoba *Dominik = new osoba;
    Dominik-> ustaw("Dominik","Gabrysz");
    Dominik-> wyswietl();
    return 0;
}
