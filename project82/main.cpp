#include <iostream>
using namespace std;

class Prostopadloscian{
private:
    int a,b,c;
public:
    Prostopadloscian(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }

    int objetosc(){
        return a*b*c;
    }

    int pole_powierzchni_calkowitej(){
        return 2*(a*b + a*c + b*c);
    }

    int dlugosc_krawedzi(){
        return 4*(a+b+c);
    }
};

class Uczen{
private:
    string imie,nazwisko,data_ur,klasa,grupa;
public:
    void Ustaw_imie(string i){
        imie = i;
    };
    void Ustaw_nazwisko(string n){
        nazwisko = n;
    };
    void Ustaw_date_ur(string d){
        data_ur = d;
    };
    void Ustaw_klase(string k){
        klasa = k;
    };
    void Ustaw_grupe(string g){
        grupa = g;
    };


    void wyswietl(){
        cout << "Imie: "<< imie << endl;
        cout << "Nazwisko: "<< nazwisko << endl;
        cout << "Data urodzenia: "<< data_ur<< endl;
        cout << "Klasa: "<< klasa << endl;
        cout << "Grupa: "<< grupa << endl;
    }
};

int main() {
    int a,b,c;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
    Prostopadloscian p(a,b,c);
    cout << p.objetosc() << endl;
    cout << p.pole_powierzchni_calkowitej() << endl;
    cout << p.dlugosc_krawedzi() << endl;

    Uczen uczen;
    string imie,nazwisko,data_ur,klasa,grupa;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj date urodzenia: ";
    cin >> data_ur;
    cout << "Podaj klase: ";
    cin >> klasa;
    cout << "Podaj grupe: ";
    cin >> grupa;

    uczen.Ustaw_imie(imie);
    uczen.Ustaw_nazwisko(nazwisko);
    uczen.Ustaw_date_ur(data_ur);
    uczen.Ustaw_klase(klasa);
    uczen.Ustaw_grupe(grupa);
    uczen.wyswietl();

    return 0;
}
