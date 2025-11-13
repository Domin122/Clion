#include <iostream>
#include "Uczen.h"

using namespace std;


int main() {
    Uczen u1("Dominik",19,5);

    cout << "Dane ucznia: " << endl;
    u1.wypiszInformacje();

    cout << endl << "Zmieniam Dane..." << endl << endl;
    u1.ustawImie("Maciek");
    u1.ustawWiek(18);
    u1.ustawSrednia(4);

    cout << "Nowe dane ucznia:" << endl;
    u1.wypiszInformacje();

    return 0;
}
