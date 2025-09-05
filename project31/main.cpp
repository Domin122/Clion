#include <iostream>

using namespace std;

class Przelicznik {
private:
    double dlugoscwMetrach;

public:
    void dlugosc(double metry) {
        dlugoscwMetrach = metry;
    }

    double metry_na_mile() {
        return dlugoscwMetrach * 0.000621371;
    }

    double metry_na_jardy() {
        return dlugoscwMetrach * 1.09361;
    }

    double metry_na_stopy() {
        return dlugoscwMetrach * 3.28084;
    }
};

int main() {
    Przelicznik przelicz;
    double dlugoscwMetrach;

    cout << "Podaj długość w metrach: ";
    cin >> dlugoscwMetrach;

    przelicz.dlugosc(dlugoscwMetrach);

    cout << "Długość w milach: " << przelicz.metry_na_mile() << endl;
    cout << "Długość w jardach: " << przelicz.metry_na_jardy() << endl;
    cout << "Długość w stopach: " << przelicz.metry_na_stopy() << endl;

    return 0;
}
