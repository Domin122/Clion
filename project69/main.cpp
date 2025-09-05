#include <iostream>
using namespace std;

class Ksiazka{
public:
    string tytul, autor, wydawca;
    void wypisz() {
        cout << "Tytuł: " << tytul << "\nAutor: " << autor << "\nWydawca: " << wydawca << endl;
    }
    void wczytaj(){
        cout << "Podaj tytuł: ";
        cin >> tytul;
        cout << "Podaj autora: ";
        cin >> autor;
        cout << "Podaj wydawcę: ";
        cin >> wydawca;
    }
};

/*void wypisz(const Ksiazka *a){
    cout << "Tytuł: " << a->tytul << "\nAutor: " << a->autor << "\nWydawca: " << a->wydawca << endl;
}

void wczytaj(Ksiazka &a){
    cout << "Podaj tytuł: ";
    cin >> a.tytul;
    cout << "Podaj autora: ";
    cin >> a.autor;
    cout << "Podaj wydawcę: ";
    cin >> a.wydawca;
}*/

int main() {
    Ksiazka kotek;
    kotek.wczytaj();
    kotek.wypisz();

    return 0;
}
