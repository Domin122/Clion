#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Employee {
public:
    string imie;
    int id;
    Employee(string imie, int id) : imie(imie), id(id) {}
};

class IKalkulatorPensji {
public:
    virtual double obliczPensje() const = 0;
    virtual ~IKalkulatorPensji() = default;
};

class PracownikPelnoetatowy : public IKalkulatorPensji {
    double miesiecznaPensja;
public:
    PracownikPelnoetatowy(double pensja) : miesiecznaPensja(pensja) {}
    double obliczPensje() const override { return miesiecznaPensja; }
};

class PracownikCzesciowy : public IKalkulatorPensji {
    double stawkaGodzinowa;
    int przepracowaneGodziny;
public:
    PracownikCzesciowy(double stawka, int godziny) : stawkaGodzinowa(stawka), przepracowaneGodziny(godziny) {}
    double obliczPensje() const override { return stawkaGodzinowa * przepracowaneGodziny; }
};

class ISerwisEmail {
public:
    virtual void wyslijEmail(const string& wiadomosc) = 0;
    virtual ~ISerwisEmail() = default;
};

class SerwisEmail : public ISerwisEmail {
public:
    void wyslijEmail(const string& wiadomosc) override {
        cout << "Wysylanie e-maila: " << wiadomosc << endl;
    }
};

int main() {
    vector<unique_ptr<IKalkulatorPensji>> pracownicy;
    pracownicy.push_back(make_unique<PracownikPelnoetatowy>(5000));
    pracownicy.push_back(make_unique<PracownikCzesciowy>(20, 80));

    for (const auto& pracownik : pracownicy)
        cout << "Pensja: " << pracownik->obliczPensje() << "\n";

    auto serwisEmail = make_unique<SerwisEmail>();
    serwisEmail->wyslijEmail("Lista plac przetworzona.");

    return 0;
}
