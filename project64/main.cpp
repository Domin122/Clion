#include <iostream>
#include <cmath>
using namespace std;

int (*wsk)(int, int);

int oblicz(int i);

typedef int (*wsk2)(int, int);

int oblicz(wsk2 wynik, int a, int b = 0){
    return wynik(a,b);
}

int dodaj(int a, int b){
    cout << a << " + "<< b << " = ";
    return a + b;
}

int odejmij(int a, int b){
    cout << a << " - "<< b << " = ";
    return a - b;
}

int pomnoz(int a, int b){
    if (a == 0){
        cout << "Nie mnożymny przez zero";
    }
    if (b == 0){
        cout << "Nie mnożymny przez zero";
    }
    cout << a << " * "<< b << " = ";
    return a * b;
}

int podziel(int a, int b){
    if (a == 0){
        cout << "Nie dzielimy przez zero";
    }
    if (b == 0){
        cout << "Nie dzielimy przez zero";
    }
    cout << a << " / "<< b << " = ";
    return a/b;
}

int potega(int a, int b){
    cout << a << " do potęgi "<< b << " = ";
    return pow(a,b);

}


int main() {
    cout << oblicz(dodaj,10,6);
    cout << endl;
    cout << oblicz(odejmij,8,4);
    cout << endl;
    cout << oblicz(pomnoz,5,4);
    cout << endl;
    cout << oblicz(podziel,20,5);
    cout << endl;
    cout << oblicz(potega,5,3);
    cout << endl;



    return 0;
}

