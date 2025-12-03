#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<int> wczytajPlik(string sciezka) {
    vector<int> liczby;
    ifstream plik(sciezka);
    if (plik) {
        //znak po znaku
        /* char zn;
         while(!plik.eof()){
             zn = plik.get();
             cout << zn << " ";
         } */
        //słowo po słowie
        /* string slowo;
         while (!plik.eof()) {
             plik >> slowo;
             cout << slowo;
         } */
        //linia po lini;
        string linia;
        while(getline(plik,linia)){
            cout << linia << endl;
            liczby.push_back(stoi(linia));
        }

    } else
        cerr << "Nie można czytać pliku";
    return liczby;
}

int main() {
    wczytajPlik("liczby.txt");
    return 0;
}

