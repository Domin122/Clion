#include <iostream>

using namespace std;

int silnia(int n){
    if(n == 0){
        return 1;
    }
    int wynik = 1;
    for (int i = 1; i <= n ; i++) {
        wynik *=i;
    }
    return wynik;
}

int silnia2(int n){
    if(n == 0) {
        return 1;
    }
    return n * silnia2(n-1);
}

int potega(int a, int n){
    if (n == 0)
        return 1;
    int wynik = 1;
    for (int i = 1; i <= n ; i++) {
        wynik *= a;
    }
    return wynik;
}

int potega2(int a,int n){
    if (n == 0)
        return 1;
    return a * potega2(a,n-1);
}

int fib (int x){
    if(x<2)
        return 1;
    return fib(x-1) + fib(x-2);
}


int main() {
    cout << silnia2(5) << endl;
    cout << potega2(2,3) << endl;
    int wynik;
    wynik = fib(8);
    cout << wynik;


    return 0;
}
