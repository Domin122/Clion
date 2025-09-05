#include <iostream>
#include <utility>

using namespace std;

class zwierze{
public:
    int lapy;
    bool skrzydla;
    string plec;
    string imie;
    void dodajzwierze(int, bool, string, string);
    zwierze(int, bool, string, string);
};



int main() {


    return 0;
}


zwierze::zwierze(int lapy, bool skrzydla, string plec, string imie) {
    this-> lapy = lapy;
    this-> skrzydla = skrzydla;
    this -> plec =plec;
    this-> imie = imie;
}

void zwierze::dodajzwierze(int, bool, string, string) {
    this-> lapy = lapy;
    this-> skrzydla = skrzydla;
    this -> plec = plec;
    this-> imie = imie;
}
