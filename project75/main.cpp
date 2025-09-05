#include <iostream>
#include <vector>

using namespace std;

class Stos {
public:
    virtual int z_wierzchu() const = 0;
    virtual void usun_z_wierzchu() = 0;
    virtual void dodaj_na_koniec(int wartosc) = 0;
    virtual bool pusty() const = 0;
    virtual ~Stos() {}
};

class StosImpl : public Stos {
    vector<int> dane;
public:
    int z_wierzchu() const override {
        return dane.back();
    }
    void usun_z_wierzchu() override {
        dane.pop_back();
    }
    void dodaj_na_koniec(int wartosc) override {
        dane.push_back(wartosc);
    }
    bool pusty() const override {
        return dane.empty();
    }
};

int main() {
    StosImpl stos;
    stos.dodaj_na_koniec(10);
    stos.dodaj_na_koniec(20);
    stos.dodaj_na_koniec(30);

    while (!stos.pusty()) {
        cout << stos.z_wierzchu() << endl;
        stos.usun_z_wierzchu();
    }
    return 0;
}