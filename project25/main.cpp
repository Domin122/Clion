#include <iostream>

using namespace std;

class Osoba{
    static int age;
public:
    string imie = "Kamil",nazwisko;
    Osoba();
    void getAge();
    static string show();
};

int Osoba::age = 18;

Osoba::Osoba() {
    age++;
}

void Osoba::getAge() {
    cout <<  age;

}

string Osoba::show() {
    return ""+age;
}


int main() {
    Osoba Kamil;
    Osoba Andrzej;
    Osoba Marcin;
    Marcin.getAge();
    Osoba::show();


    return 0;
}
