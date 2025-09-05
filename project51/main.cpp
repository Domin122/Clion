#include <iostream>
#include <cstdarg>
using namespace std;

/*void test(int a,...){
    va_list v;
    va_start(v,a);
    cout << va_arg(v,int) <<endl;
    cout << va_arg(v,char*) <<endl;
    cout << va_arg(v,char*) <<endl;
    cout << va_arg(v,char*) <<endl;
    cout << va_arg(v,double) <<endl;
}*/

/*void test1(int a,...){
    va_list v;
    va_start(v,a);
    char* l;
    while(l != "\0"){
        l = va_arg(v,char*);
        cout << l << " ";
    }

    va_end(v);
}*/

void zad(int a,...){
    va_list v;
    va_start(v,a);
    int a1 = a;
    int b = va_arg(v,int);
    int c = va_arg(v,int);
    int d = va_arg(v,int);
    int e = va_arg(v,int);
    int f = va_arg(v,int);

    int suma = a1 + b +c +d +e +f;
    int srednia = suma/6;

    cout<< "Suma wszystkich liczb z tablicy: " << suma <<endl;
    cout<< "Średnia wszystkich liczb z tablicy: " << srednia <<endl;

    cout << sizeof(suma);
    va_end(v);
}


int main() {
    //test(14,34,"ala","ma","kota",4.15);
    //test1(45,"h","u","h","\0");
    zad(5,6,8,3,9,7);
    return 0;
}
