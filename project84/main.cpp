#include <iostream>
#include <string>

using namespace std;

class Pojazd {
protected:
    string marka;
    string model;
    int rok_produkcji;
public:
    Pojazd(string m, string mo, int r) {
        marka = m;
        model = mo;
        rok_produkcji = r;
    }
    virtual ~Pojazd() {}

    virtual void wyswietlInformacje() const = 0;

    string getMarka() { return marka; }
    string getModel() { return model; }
    int getRokProdukcji() { return rok_produkcji; }

    void setMarka(string m) { marka = m; }
    void setModel(string mo) { model = mo; }
    void setRokProdukcji(int r) { rok_produkcji = r; }
};

class Samochod : public Pojazd {
private:
    int liczba_drzwi;
public:
    Samochod(string m, string mo, int r, int ld) : Pojazd(m, mo, r) {
        liczba_drzwi = ld;
    }

    void wyswietlInformacje() const override {
        cout << endl << "Samochod: " << marka << " " << model << endl <<"Rok: " << rok_produkcji << endl
             << "Liczba drzwi: " << liczba_drzwi << endl;
    }

    int getLiczbaDrzwi() { return liczba_drzwi; }
    void setLiczbaDrzwi(int ld) { liczba_drzwi = ld; }
};

class Motocykl : public Pojazd {
private:
    bool ma_kufry;
public:
    Motocykl(string m, string mo, int r, bool kufry) : Pojazd(m, mo, r) {
        ma_kufry = kufry;
    }

    void wyswietlInformacje() const override {
        cout << endl << "Motocykl: " << marka << " " << model << endl << "Rok: " << rok_produkcji << endl
             << "Kufry: " << (ma_kufry ? "Tak" : "Nie")  << endl;
    }

    bool getMaKufry() { return ma_kufry; }
    void setMaKufry(bool kufry) { ma_kufry = kufry; }
};

int main() {
    Pojazd* samochod = new Samochod("Toyota", "Corolla", 2020, 4);
    Pojazd* motocykl = new Motocykl("Yamaha", "MT-07", 2019, true);

    samochod->wyswietlInformacje();
    motocykl->wyswietlInformacje();

    Samochod* s = (Samochod*)samochod;
    if (s) {
        s->setLiczbaDrzwi(2);
        s->wyswietlInformacje();
    }

    Motocykl* m = (Motocykl*)motocykl;
    if (m) {
        m->setMaKufry(false);
        m->wyswietlInformacje();
    }

    delete samochod;
    delete motocykl;

    return 0;
}
