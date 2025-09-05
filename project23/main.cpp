#include <iostream>

using namespace std;

class Poczta{
public:
    string nadawca,odbiorca,temat,tresc;
    Poczta(string,string,string,string);
    void wypisz() {
        cout << "Nadawca: " << nadawca << endl << "Odbiorca: "  << odbiorca  << endl << "Temat: " << temat << endl  << "Treść: " << tresc << endl;
    }
    void wczytaj(){
        cout << "Podaj nadawcę" << endl;
        cin >> nadawca;
        cout << "Podaj odbiorca" << endl;
        cin >> odbiorca;
        cout << "Podaj temat" << endl;
        cin >> temat;
        cout << "Podaj treść" << endl;
        cin >> tresc;
    }
};

Poczta::Poczta(string nadawca,string odbiorca,string temat,string tresc) {
 this -> nadawca = nadawca;
 this -> odbiorca = odbiorca;
 this -> temat = temat;
 this -> tresc = tresc;
}

int main() {
    Poczta list("","","","");
    list.wczytaj();
    list.wypisz();


    return 0;
}
