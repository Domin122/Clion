#include <iostream>

using namespace std;

class Osoba{
    string imie;
public:
    Osoba(string);
    Osoba(Osoba &p);
    void showImie();
};

Osoba::Osoba(string imie) {
    Osoba::imie = imie;
}

void Osoba::showImie() {
    cout << imie << endl;
}

Osoba::Osoba(Osoba &p) {
    imie = p.imie;
}

int main() {
    Osoba karol("Karol");
    karol.showImie();
    Osoba marcin(karol);
    marcin.showImie();
    return 0;
}
