#include <iostream>

using namespace std;

class Mebel{
    float waga;
    string material;
public:
    string rodzaj;
    int cena_hurtowa;
    Mebel(float,string,string,int);
};

Mebel::Mebel(float waga,string material ,string rodzaj , int cena_hurtowa) {
    this -> waga = waga;
    this -> material = material;
    this -> rodzaj = rodzaj;
    this-> cena_hurtowa = cena_hurtowa;
}



int main() {
    Mebel stol();

    return 0;
}
