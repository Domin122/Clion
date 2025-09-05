#include <iostream>
using namespace std;

/**
 * Oblicza pole prostokąta na podstawie podanej szerokości i wysokości.
 *
 * @param szerokosc szerokość prostokąta w jednostkach całkowitych
 * @param wysokosc wysokość prostokąta w jednostkach całkowitych
 * @return pole prostokąta jako liczba całkowita
 */

int obliczPoleProstokata(int szerokosc, int wysokosc) {
    return szerokosc * wysokosc;
}

/**
 * @class KontoBankowe
 * @brief Klasa reprezentująca proste konto bankowe z możliwością wpłat, wypłat i sprawdzania salda.
 */
class KontoBankowe {
private:
    /**
     * @brief Bieżące saldo konta.
     */
    double saldo;

public:
    /**
     * @brief Konstruktor tworzący konto z podanym saldem początkowym.
     * @param poczatkoweSaldo Początkowa wartość salda konta.
     */
    KontoBankowe(double poczatkoweSaldo);

    /**
     * @brief Dokonuje wpłaty na konto.
     * @param kwota Kwota do dodania do salda konta.
     */
    void wplata(double kwota);

    /**
     * @brief Dokonuje wypłaty z konta.
     * @param kwota Kwota do odjęcia od salda konta.
     */
    void wyplata(double kwota);

    /**
     * @brief Zwraca aktualne saldo konta.
     * @return Aktualne saldo jako wartość typu double.
     */
    double pobierzSaldo() const;
};

int main() {

    return 0;
}

