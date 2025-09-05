#include <iostream>
using namespace std;

//abstrakcja
class zwierz{
protected:
    string gatunek, plec;
    virtual void skacz(){
        cout << "hop hop";
    };
    virtual void biegaj(){
        cout << "Biega";
    };
    virtual void odglos() = 0;
    virtual void mniam() = 0;
};

class kaczka:zwierz{
public:
    void setter();
    void skacz() override {
        zwierz::skacz();
    }

    void biegaj() override{
        zwierz::biegaj();
        cout << "\nczłap człap";
    };
    void odglos() override {

    }

    void mniam() override{

    };
};

void kaczka::setter() {
    gatunek = "ptak";
    plec = "ona";
}

class agd{
protected:
    string marka;

};

class telewizor:agd{
    void setter() {
        marka = "Samsung";
    }
};

class pralka:agd{
    void setter(){
        marka = "Samsung";
    };
};

class lodowka:agd{
    void setter(){
        marka = "Samsung";
    };
};

int main() {

    //kaczka hej;
    //hej.biegaj();

    return 0;
}
