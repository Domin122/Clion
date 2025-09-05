#include <iostream>

using namespace std;

class Ksiazka{
public:
    string tytul,autor,wydawca;
    Ksiazka(string,string,string);
    void wypisz();
    void wczytaj();
};

Ksiazka::Ksiazka(string tytul, string autor, string wydawca) {
    this ->tytul = tytul;
    this ->autor = autor;
    this ->wydawca =wydawca;
}

void Ksiazka::wypisz() {
    cout << "Tytuł: " << tytul << endl << "Autor: " << autor << endl << "Wydawca: " << wydawca;
}

void Ksiazka::wczytaj() {
    cout << "Jaki tytuł ma ta Książka:";
    cin >> tytul;
    cout << "Jakiego autora ma ta Książka:";
    cin >> autor;
    cout << "Jakiego wydawcę ma ta Książka:";
    cin >> wydawca;
}

int main() {
    Ksiazka Matma("","","");
    Matma.wczytaj();
    Matma.wypisz();


    return 0;
}
