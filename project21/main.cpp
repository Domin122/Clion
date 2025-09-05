#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 1,b=4,c=1;
    double delta;
    double x,x1,x2;

    delta = pow(b, 2) -4 * a * c;

    if (delta > 0) {
        x1 = (-b - sqrt(delta)) / (2*a);
        x2 = (-b + sqrt(delta)) / (2*a);
        cout << "x1 = "<< x1 << endl << "x2 = " << x2;
    } else if (delta == 0) {
        x = -b / (2 * a);
        cout << x;
    } else {
        cout << "Brak rozwiązań";
    }


    return 0;
}
