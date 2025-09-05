#include <iostream>

using namespace std;



int main() {
auto *w_bok1 = new double;
auto *w_bok2 = new double;
auto *w_pole = new double;
auto *w_obwod = new double;

*w_bok1 = 3;
*w_bok2 = 2;

*w_pole = *w_bok1 * *w_bok2;
*w_obwod = 2 * (*w_bok1 * *w_bok2);

cout << "Pole prostokata: " << *w_pole << endl;
cout << "Obwód prostokata: " << *w_obwod << endl;

delete w_bok1;
delete w_bok2;
delete w_pole;
delete w_obwod;

    return 0;
}
