#include <iostream>
#include <string>

using namespace std;

bool czytopesel(string pesel) {
    if (pesel.length() != 11) {
        return false;
    }
    return true;
}

string sprawdzPlec(string pesel) {
    if (!czytopesel(pesel)) {
        return "Nieprawidłowy PESEL";
    }
    int cyfraPlec = pesel[9];

    if (cyfraPlec % 2 == 0) {
        return "Kobieta";
    } else {
        return "Mężczyzna";
    }
}
int main() {
    string pesel;

    cout << "Podaj PESEL: ";
    cin >> pesel;

    string plec = sprawdzPlec(pesel);

    if (plec == "Nieprawidłowy PESEL") {
        cout << "Nieprawidłowy numer PESEL!" << endl;
    } else {
        cout << "Płeć: " << plec << endl;
    }

    return 0;
}
