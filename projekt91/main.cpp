#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Klasa Ksiazka
class Ksiazka {
protected:
    string tytul;
    string autor;
    int rokWydania;
    string ISBN;
    bool dostepna;

public:
    Ksiazka(string tytul, string autor, int rokWydania, string ISBN)
            : tytul(tytul), autor(autor), rokWydania(rokWydania), ISBN(ISBN), dostepna(true) {}

    virtual ~Ksiazka() {}

    virtual void wyswietlInformacje() {
        cout << "Tytuł: " << tytul << ", Autor: " << autor
             << ", Rok wydania: " << rokWydania << ", ISBN: " << ISBN
             << ", Dostępna: " << (dostepna ? "Tak" : "Nie") << endl;
    }

    void wypozycz() {
        if (dostepna) {
            dostepna = false;
            cout << "Książka '" << tytul << "' została wypożyczona." << endl;
        } else {
            cout << "Książka '" << tytul << "' jest niedostępna." << endl;
        }
    }

    void zwroc() {
        dostepna = true;
        cout << "Książka '" << tytul << "' została zwrócona." << endl;
    }

    string getISBN() const {
        return ISBN;
    }
};

// Klasa DrukowanaKsiazka
class DrukowanaKsiazka : public Ksiazka {
private:
    int liczbaStron;

public:
    DrukowanaKsiazka(string tytul, string autor, int rokWydania, string ISBN, int liczbaStron)
            : Ksiazka(tytul, autor, rokWydania, ISBN), liczbaStron(liczbaStron) {}

    void wyswietlInformacje() override {
        Ksiazka::wyswietlInformacje();
        cout << "Liczba stron: " << liczbaStron << endl;
    }
};

// Klasa Ebook
class Ebook : public Ksiazka {
private:
    int rozmiarPlikuMB;

public:
    Ebook(string tytul, string autor, int rokWydania, string ISBN, int rozmiarPlikuMB)
            : Ksiazka(tytul, autor, rokWydania, ISBN), rozmiarPlikuMB(rozmiarPlikuMB) {}

    void wyswietlInformacje() override {
        Ksiazka::wyswietlInformacje();
        cout << "Rozmiar pliku: " << rozmiarPlikuMB << " MB" << endl;
    }
};

// Klasa Uzytkownik
class Uzytkownik {
private:
    vector<Ksiazka*> wypozyczoneKsiazki;

public:
    Uzytkownik(string imieNazwisko, int idUzytkownika)
            : imieNazwisko(imieNazwisko), idUzytkownika(idUzytkownika) {}

    ~Uzytkownik() {
        for (auto ksiazka : wypozyczoneKsiazki) {
            ksiazka->zwroc();
        }
    }

    void wypozyczKsiazke(Ksiazka* ksiazka) {
        ksiazka->wypozycz();
        wypozyczoneKsiazki.push_back(ksiazka);
    }

    void zwrocKsiazke(Ksiazka* ksiazka) {
        ksiazka->zwroc();
        wypozyczoneKsiazki.erase(remove(wypozyczoneKsiazki.begin(), wypozyczoneKsiazki.end(), ksiazka), wypozyczoneKsiazki.end());
    }

    void wyswietlWypozyczoneKsiazki() {
        cout << "Wypożyczone książki przez " << imieNazwisko << ":" << endl;
        for (auto ksiazka : wypozyczoneKsiazki) {
            ksiazka->wyswietlInformacje();
        }
    }

    int idUzytkownika;
    string imieNazwisko;
};

// Klasa Biblioteka
class Biblioteka {
private:
    vector<Ksiazka*> listaKsiazek;
    vector<Uzytkownik> listaUzytkownikow;

public:
    ~Biblioteka() {
        for (auto ksiazka : listaKsiazek) {
            delete ksiazka; // Usuwanie dynamicznie alokowanych książek
        }
    }

    void dodajKsiazke(Ksiazka* ksiazka) {
        listaKsiazek.push_back(ksiazka);
        cout << "Dodano książkę: " << ksiazka->getISBN() << endl;
    }

    void zarejestrujUzytkownika(Uzytkownik uzytkownik) {
        listaUzytkownikow.push_back(uzytkownik);
        cout << "Zarejestrowano użytkownika: " << uzytkownik.imieNazwisko << endl;
    }

    void wyswietlWszystkieKsiazki() {
        cout << "Lista wszystkich książek:" << endl;
        for (auto ksiazka : listaKsiazek) {
            ksiazka->wyswietlInformacje();
        }
    }

    void wyswietlUzytkownikow() {
        cout << "Lista wszystkich użytkowników:" << endl;
        for (auto& uzytkownik : listaUzytkownikow) {
            cout << uzytkownik.imieNazwisko << endl;
        }
    }

    Ksiazka* znajdzKsiazkePoISBN(string ISBN) {
        for (auto ksiazka : listaKsiazek) {
            if (ksiazka->getISBN() == ISBN) {
                return ksiazka;
            }
        }
        return nullptr;
    }

    void wypozyczKsiazke(string ISBN, int idUzytkownika) {
        Ksiazka* ksiazka = znajdzKsiazkePoISBN(ISBN);
        if (ksiazka) {
            for (auto& uzytkownik : listaUzytkownikow) {
                if (uzytkownik.idUzytkownika == idUzytkownika) {
                    uzytkownik.wypozyczKsiazke(ksiazka);
                    return;
                }
            }
            cout << "Użytkownik o ID " << idUzytkownika << " nie został znaleziony." << endl;
        } else {
            cout << "Książka o ISBN " << ISBN << " nie została znaleziona." << endl;
        }
    }

    void zwrocKsiazke(string ISBN, int idUzytkownika) {
        Ksiazka* ksiazka = znajdzKsiazkePoISBN(ISBN);
        if (ksiazka) {
            for (auto& uzytkownik : listaUzytkownikow) {
                if (uzytkownik.idUzytkownika == idUzytkownika) {
                    uzytkownik.zwrocKsiazke(ksiazka);
                    return;
                }
            }
            cout << "Użytkownik o ID " << idUzytkownika << " nie został znaleziony." << endl;
        } else {
            cout << "Książka o ISBN " << ISBN << " nie została znaleziona." << endl;
        }
    }
};

// Funkcja główna
int main() {
    Biblioteka biblioteka;
    int wybor;

    do {
        cout << "\nMenu:\n";
        cout << "1. Dodaj książkę\n";
        cout << "2. Zarejestruj użytkownika\n";
        cout << "3. Wypożycz książkę\n";
        cout << "4. Zwróć książkę\n";
        cout << "5. Wyświetl wszystkie książki\n";
        cout << "6. Wyświetl wszystkich użytkowników\n";
        cout << "7. Zakończ program\n";
        cout << "Wybierz opcję: ";
        cin >> wybor;

        switch (wybor) {
            case 1: {
                string tytul, autor, ISBN;
                int rokWydania, liczbaStron;
                cout << "Podaj tytuł: ";
                cin >> tytul;
                cout << "Podaj autora: ";
                cin >> autor;
                cout << "Podaj rok wydania: ";
                cin >> rokWydania;
                cout << "Podaj ISBN: ";
                cin >> ISBN;
                cout << "Podaj liczbę stron: ";
                cin >> liczbaStron;
                biblioteka.dodajKsiazke(new DrukowanaKsiazka(tytul, autor ,rokWydania, ISBN, liczbaStron));
                break;
            }
            case 2: {
                string imieNazwisko;
                int idUzytkownika;
                cout << "Podaj imię i nazwisko: ";
                cin >> imieNazwisko;
                cout << "Podaj ID użytkownika: ";
                cin >> idUzytkownika;
                biblioteka.zarejestrujUzytkownika(Uzytkownik(imieNazwisko, idUzytkownika));
                break;
            }
            case 3: {
                string ISBN;
                int idUzytkownika;
                cout << "Podaj ISBN książki: ";
                cin >> ISBN;
                cout << "Podaj ID użytkownika: ";
                cin >> idUzytkownika;
                biblioteka.wypozyczKsiazke(ISBN, idUzytkownika);
                break;
            }
            case 4: {
                string ISBN;
                int idUzytkownika;
                cout << "Podaj ISBN książki: ";
                cin >> ISBN;
                cout << "Podaj ID użytkownika: ";
                cin >> idUzytkownika;
                biblioteka.zwrocKsiazke(ISBN, idUzytkownika);
                break;
            }
            case 5: {
                biblioteka.wyswietlWszystkieKsiazki();
                break;
            }
            case 6: {
                biblioteka.wyswietlUzytkownikow();
                break;
            }
            case 7: {
                cout << "Zakończenie programu." << endl;
                break;
            }
            default: {
                cout << "Nieprawidłowy wybór. Spróbuj ponownie." << endl;
                break;
            }
        }
    } while (wybor != 7);

    return 0;
}
