#include <iostream>
#include <cmath>

using namespace std;
class Prostopadloscian{
public:
    double pole_p;
    double objetosc;
    Prostopadloscian(double, double);
    string wyswietl();
};


string Prostopadloscian::wyswietl() {
    return "Objetosc: ";
}

Prostopadloscian::Prostopadloscian(double pole_p,double objetosc){
    this -> pole_p = pole_p;
    this -> objetosc = objetosc;
}

int main() {
    int a,b,c;
    cout << "Wprowadź A:";
    cin >> a;
    cout << "Wprowadź B:";
    cin >> b;
    cout << "Wprowadź C:";
    cin >> c;


    return 0;
}

