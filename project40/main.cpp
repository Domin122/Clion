#include <iostream>
using namespace std;

int Nwd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return Nwd(b, a % b);
}


void skrocUlamek(int &licznik, int &mianownik) {
    int nwd = Nwd(licznik, mianownik);
    licznik /= nwd;
    mianownik /= nwd;
}

int main() {
    int licznik, mianownik;
    cout << "Podaj licznik ułamka: ";
    cin >> licznik;
    cout << "Podaj mianownik ułamka: ";
    cin >> mianownik;


    skrocUlamek(licznik, mianownik);

    cout << "Ułamek po skróceniu to: " << licznik << "/" << mianownik << endl;

    return 0;
}
