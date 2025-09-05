#include <iostream>
using namespace std;

struct Data{
    int dd,mm,rr;
};

struct Osoba {
string imie,nazwisko;
Data data_ur;
Osoba(string,string,Data);
};

Osoba::Osoba(string im, string naz, Data data):
    imie(im),
    nazwisko(naz),
    data_ur(data)
{}




int main() {

    return 0;
}
