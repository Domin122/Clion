#include <iostream>
#include <cmath>
using namespace std;

class Punkt;

class KalkulatorOdleglosci {
public:
    static double obliczOdleglosc(Punkt a, Punkt b);
};

class Punkt {
private:
    double x, y;

public:
    Punkt(double xVal, double yVal) : x(xVal), y(yVal) {}

    friend class KalkulatorOdleglosci;
};

double KalkulatorOdleglosci::obliczOdleglosc(Punkt a, Punkt b) {
    return sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}

int main() {
    Punkt p1(1.0, 2.0), p2(4.0, 6.0);
    cout << "Odleglosc miedzy punktami: " << KalkulatorOdleglosci::obliczOdleglosc(p1, p2) << endl;
    return 0;
}