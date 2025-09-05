#include <iostream>
#include <fstream>

using namespace std;

int main() {
const string src="dane.txt";
ofstream doPliku(src,ios::app);
if(doPliku){
    string imie = "Moje imie i nazwisko \nto Dominik Gabrysz";
    doPliku << imie << endl;
}

ifstream zPliku(src);
if(zPliku){
    string liniaTekstu;
    getline(zPliku,liniaTekstu);
    string slowo;
    zPliku >> slowo;
    char znak;
    zPliku.get(znak);
}

if(zPliku){
    string linia;
    while (getline(zPliku,linia)){
        cout << linia << endl;
    }

}

    return 0;
}
