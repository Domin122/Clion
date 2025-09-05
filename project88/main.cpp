#include <iostream>

using namespace std;

class Pojazd{
public:
    int i = 10;
    virtual void jedz() = 0;
    virtual void zatrzymaj() = 0;

};

class Samochod:public Pojazd{
public:
    int miejsce,drzwi;
    void jedz() override{
        cout << "Brum brum......" << endl;
    }
    void zatrzymaj() override{
        cout << "Iiiiiii bum......" << endl;
    }
};

class Rower:public Pojazd{
public:
    string rodzaj;
    void jedz() override{
        cout << "ii ii iii i i......" << endl;
    }
    void zatrzymaj() override{
        cout << "Szszszszszsz......" << endl;
    }
};

int main() {
    Pojazd *pojazdy[] = {new Samochod, new Rower};
    pojazdy[0] -> zatrzymaj();

    return 0;
}

