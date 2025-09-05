#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

struct Kolo {
    double promien;
    double pole;

    bool operator<(const Kolo &other) const {
        return pole < other.pole;
    }
};

int main() {
    ifstream plikWe("promienie.rtf");
    ofstream plikWy("wynik.rtf");

    if (!plikWe) {
        cout << "Nie można otworzyć pliku promienie.rtf" << endl;
        return 1;
    }

    vector<Kolo> kola;
    double promien;
    while (plikWe >> promien) {
        Kolo kolo;
        kolo.promien = promien;
        kolo.pole = 3.14159 * promien * promien; // pi * r^2
        kola.push_back(kolo);
    }

    sort(kola.begin(), kola.end());

    for (const auto &kolo : kola) {
        plikWy << "Promień: " << kolo.promien << ", Pole: " << kolo.pole << endl;
    }

    plikWe.close();
    plikWy.close();

    return 0;
}
