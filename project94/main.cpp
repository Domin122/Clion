#include <iostream>
using namespace std;

int AlogrytmEuklidesa(int a,int b) {
    if (a <= 0 || b <= 0)
        throw invalid_argument("Liczby muszą być dodatnie.");


        while (a != b) {
            if (a > b) {
                a = a - b;
            } else
                b = b - a;
        }


        return a;
    }

int main() {
    int a, b;

    cout << "NWD dwóch liczb dodatnich" << endl;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    try {
        int nwd = AlogrytmEuklidesa(a, b);
        cout << "Najwiekszy wspolny dzielnik (NWD) liczb " << a << " i " << b << " wynosi: " << nwd << endl;
    }
        catch (const invalid_argument &e) {
        cerr << "Blad: " << e.what() << endl;
    }


        return 0;
    }

