#include <iostream>
#include <string>

using namespace std;


class Samochod {
public:
    string marka;
    string model;
    int rok_produkcji;


    Samochod(string marka, string model, int rok_produkcji)
            : marka(marka), model(model), rok_produkcji(rok_produkcji) {}


    virtual string typPojazdu() const = 0;

    virtual string informacje() const {
        return marka + " " + model + ", rok produkcji: " + to_string(rok_produkcji);
    }

    virtual ~Samochod() {}
};


class SamOsobowy : public Samochod {
public:
    int liczba_miejsc;

    SamOsobowy(string marka, string model, int rok_produkcji, int liczba_miejsc)
            : Samochod(marka, model, rok_produkcji), liczba_miejsc(liczba_miejsc) {}

    string typPojazdu() const override {
        return "Samochód osobowy";
    }

    string informacje() const override {
        return Samochod::informacje() + ", liczba miejsc: " + to_string(liczba_miejsc);
    }
};

class SamCiezarowy : public Samochod {
public:
    int ladownosc;
    SamCiezarowy(string marka, string model, int rok_produkcji, int ladownosc)
            : Samochod(marka, model, rok_produkcji), ladownosc(ladownosc) {}

    string typPojazdu() const override {
        return "Samochód ciężarowy";
    }

    string informacje() const override {
        return Samochod::informacje() + ", ładowność: " + to_string(ladownosc) + " kg";
    }
};


class Autobus : public Samochod {
public:
    int liczba_miejsc;

    Autobus(string marka, string model, int rok_produkcji, int liczba_miejsc)
            : Samochod(marka, model, rok_produkcji), liczba_miejsc(liczba_miejsc) {}

    string typPojazdu() const override {
        return "Autobus";
    }

    string informacje() const override {
        return Samochod::informacje() + ", liczba miejsc: " + to_string(liczba_miejsc);
    }
};


int main() {
    SamOsobowy osobowy("Toyota", "Corolla", 2020, 5);
    SamCiezarowy ciezarowy("Volvo", "FH", 2018, 20000);
    Autobus autobus("Mercedes", "Sprinter", 2022, 30);

    cout << osobowy.typPojazdu() << endl;
    cout << osobowy.informacje() << endl;

    cout << ciezarowy.typPojazdu() << endl;
    cout << ciezarowy.informacje() << endl;

    cout << autobus.typPojazdu() << endl;
    cout << autobus.informacje() << endl;

    return 0;
}
