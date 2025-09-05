#include <iostream>

using namespace std;

int nwd(int a, int b) {
    if (b == 0) return a;
    return nwd(b, a % b);
}

int nww(int a, int b) {
    return a * b / nwd(a, b);
}

void dodajUlamki(int l1, int m1, int l2, int m2, int &wynik_l, int &wynik_m) {
    int wspolny_m = nww(m1, m2);
    l1 *= wspolny_m / m1;
    l2 *= wspolny_m / m2;
    wynik_l = l1 + l2;
    wynik_m = wspolny_m;

    int nwd1 = nwd(wynik_l, wynik_m);
    wynik_l /= nwd1;
    wynik_m /= nwd1;
}

int main() {
    int l1, m1, l2, m2;
    cout << "Podaj licznik pierwszego ułamka: ";
    cin >> l1 ;
    cout << "Podaj mianownik pierwszego ułamka: ";
    cin >> m1 ;
    cout << "Podaj licznik drugiego ułamka: ";
    cin >> l2 ;
    cout << "Podaj mianownik drugiego ułamka: ";
    cin >> m2 ;

    int wynik_l, wynik_m;
    dodajUlamki(l1, m1, l2, m2, wynik_l, wynik_m);

    cout << "Wynik dodawania ułamków to: " << wynik_l << "/" << wynik_m << endl;

    return 0;
}
