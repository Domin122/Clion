#include <iostream>

using namespace std;

template<typename T, typename T1>
void wypisz_tablice(T tablica[], T1 rozmiar) {
    for (T1 i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

int main() {
    int tablica_int[] = {1, 2, 3, 4, 5};
    double tablica_double[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char tablica_char[] = {'a', 'b', 'c', 'd', 'e'};

    cout << "Tablica int: ";
    wypisz_tablice(tablica_int, 5);

    cout << "Tablica double: ";
    wypisz_tablice(tablica_double, 5);

    cout << "Tablica char: ";
    wypisz_tablice(tablica_char, 5);

    return 0;
}
