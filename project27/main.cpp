#include <iostream>
#include <string>

using namespace std;

enum ocena{
    niedostateczny=1,
    dopuszczajacy,
    dostateczny,
    dobry,
    bardzo_dobry,
    celujacy
};

class Uczen {
public:
    string imie;
    string przedmioty[5];
    ocena oceny[5]{};

    void WyswietlInformacje() {
        cout << endl <<"Imię: " << imie << endl << "--------------------" << endl;;
        for (int i = 0; i < 5; i++) {
            cout << "Przedmiot: " << przedmioty[i] << endl << "Ocena: " << PrzetworzOcene(oceny[i])
            << endl << "--------------------" << endl;
        }
    }

    string PrzetworzOcene(ocena o) {
        switch (o) {
            case niedostateczny:
                return "Niedostateczny";
            case dopuszczajacy:
                return "Dopuszczający";
            case dostateczny:
                return "Dostateczny";
            case dobry:
                return "Dobry";
            case bardzo_dobry:
                return "Bardzo Dobry";
            case celujacy:
                return "Celujący";
            default:
                return "Nieznana ocena";
        }
    }
};

int main() {
    Uczen Dominik;
    Dominik.imie = "Dominik";
    Dominik.przedmioty[0] = "Polski";
    Dominik.przedmioty[1] = "Matematyka";
    Dominik.przedmioty[2] = "Angielski";
    Dominik.przedmioty[3] = "Historia";
    Dominik.przedmioty[4] = "Programowanie";
    Dominik.oceny[0] = dobry;
    Dominik.oceny[1] = bardzo_dobry;
    Dominik.oceny[2] = celujacy;
    Dominik.oceny[3] = dobry;
    Dominik.oceny[4] = bardzo_dobry;

    Dominik.WyswietlInformacje();

    return 0;
}
