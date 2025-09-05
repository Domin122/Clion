#include <iostream>

using namespace std;

class figura{
public:
    string kolor = "Czarny";
    int a,b;
    figura();
    figura(string);
    void wyswietl();
};

figura::figura() {
    a = 5;
    b = 6;
}

figura::figura(string p):figura() {
    kolor = p;
} 

void figura::wyswietl() {
    cout << "Bok a: " << a << endl;
    cout << "Bok b: " << b << endl;
    cout << "Kolor: " << kolor << endl;
}


int main() {
    figura prostokat;
    figura kwadrat("Niebieski");

    prostokat.wyswietl();
    kwadrat.wyswietl();


    return 0;
}
