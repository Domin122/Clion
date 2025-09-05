#include <iostream>

using namespace std;

class Prostopadloscian {
private:
    double dl;
    double szer;
    double wys;

public:
    Prostopadloscian(double dl, double sz, double wys) : dl(dl), szer(sz), wys(wys) {}

    double ObliczObjetosc() {
        return dl * szer * wys;
    }

    double ObliczPolePowierzchni() {
        return 2 * (dl * szer + szer * wys + dl * wys);
    }

    double ObliczDlugoscKrawedzi() {
        return 4 * (dl + szer + wys);
    }
};

int main() {
    double dl, szer, wys;

    cout << "Podaj dlugosc prostopadloscianu: ";
    cin >> dl;

    cout << "Podaj szerokosc prostopadloscianu: ";
    cin >> szer;

    cout << "Podaj wysokosc prostopadloscianu: ";
    cin >> wys;

    Prostopadloscian prostopadloscian(dl, szer, wys);

    cout << "Objetosc prostopadloscianu: " << prostopadloscian.ObliczObjetosc() << endl;
    cout << "Pole powierzchni calkowitej prostopadloscianu: " << prostopadloscian.ObliczPolePowierzchni() << endl;
    cout << "Dlugosc wszystkich krawedzi prostopadloscianu: " << prostopadloscian.ObliczDlugoscKrawedzi() << endl;

    return 0;
}
