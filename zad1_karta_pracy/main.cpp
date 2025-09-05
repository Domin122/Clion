#include <iostream>
using namespace std;

class Pudelko {
private:
    double dlugosc;
    double szerokosc;
    double wysokosc;

public:
    Pudelko(double d, double s, double w) : dlugosc(d), szerokosc(s), wysokosc(w) {}

    friend double obliczObjetosc(Pudelko p);
};

double obliczObjetosc(Pudelko p) {
    return p.dlugosc * p.szerokosc * p.wysokosc;
}

int main() {
    Pudelko pudelko(2.5, 3.0, 4.0);
    cout << "Objetosc pudelka: " << obliczObjetosc(pudelko) << endl;
    return 0;
}