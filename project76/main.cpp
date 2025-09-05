#include <iostream>
using namespace std;

//Interface
class Ksiazka{
public:
    string autor,tytul,rok_wydania;
    virtual void wprowadz_dane(string,string ,int) = 0;
    virtual void wyswietl_dane() = 0;
    virtual void zmien_autora(string) = 0;
    virtual void zmien_tytul(string) = 0;
    virtual void zmien_rok_wydania(int) = 0;
    virtual void wyswietl_autora() = 0;
    virtual void wyswietl_tytul() = 0;
    virtual void wyswietl_rok_wydania() = 0;
};

class Encyklopedia:public Ksiazka{
public:
    void wprowadz_dane(string autor, string tytul, int rok_wydania) override {
        this->autor = autor;
        this->tytul = tytul;
        this->rok_wydania = to_string(rok_wydania);
    }
    void wyswietl_dane() override {
        cout << "Autor: " << autor << "\nTytuł: " << tytul << "\nRok Wydania: " << rok_wydania << endl;
        cout << "-------------------------------\n";
    }
    void zmien_autora(string autor) override{
        this->autor = autor;
    };
    void zmien_tytul(string tytul) override{
        this->tytul = tytul;
    };
    void zmien_rok_wydania(int rok_wydania) override{
        this->rok_wydania = to_string(rok_wydania);
    };
    void wyswietl_autora() override{
        cout << "\nAutor: " << autor <<endl;
    };
    void wyswietl_tytul() override{
        cout << "\nTytuł: " << tytul <<endl;
    };
    void wyswietl_rok_wydania() override{
        cout << "\nRok Wydania: " << rok_wydania <<endl;
    };
};

class Powiesc:public Ksiazka{
public:
    void wprowadz_dane(string autor, string tytul, int rok_wydania) override {
        this->autor = autor;
        this->tytul = tytul;
        this->rok_wydania = to_string(rok_wydania);
    }
    void wyswietl_dane() override {
        cout << "Autor: " << autor << "\nTytuł: " << tytul << "\nRok Wydania: " << rok_wydania << endl;
        cout << "-------------------------------\n";
    }
    void zmien_autora(string autor) override{
        this->autor = autor;
    };
    void zmien_tytul(string tytul) override{
        this->tytul = tytul;
    };
    void zmien_rok_wydania(int rok_wydania) override{
        this->rok_wydania = to_string(rok_wydania);
    };
    void wyswietl_autora() override{
        cout << "\nAutor: " << autor <<endl;
    };
    void wyswietl_tytul() override{
        cout << "\nTytuł: " << tytul <<endl;
    };
    void wyswietl_rok_wydania() override{
        cout << "\nRok Wydania: " << rok_wydania <<endl;
    };
};


int main() {
    Encyklopedia Tak;
    Powiesc Nie;

    Tak.wprowadz_dane("Dominik","Tak",2020);
    Nie.wprowadz_dane("Ania","Nie",2021);

    Tak.wyswietl_dane();
    Nie.wyswietl_dane();

    Tak.zmien_autora("Kacper");
    Tak.wyswietl_autora();


    return 0;
}
