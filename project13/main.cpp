#include <iostream>
#include <fstream>

using namespace std;

class tablica{
public:
    tablica(string, string);
    string jeden, zero;
    int a=10;
    string czytaj_dane();
    string zapisz_dane();
    string wczytaj_dane();
    void czytaj_dane(string,string) {
        int x=0;
        for(int i=0; i<a;i++){
            for(int j=0;j<a;j++){
                if(j==x) cout << jeden;
                else cout << zero;
            } cout << endl;
            x++;
        }
    }
    void zapisz_dane(string,string){
        const string src="macierz.txt";
        ofstream doPliku(src);
        if(doPliku){
            doPliku << czytaj_dane() << endl;
        }
    }

    void wczytaj_dane(string,string){
        const string src="macierz.txt";
        ifstream zPliku(src);
        if(zPliku){
            string linia;
            while (getline(zPliku,linia)){
                cout << linia << endl;
            }

        }
    }
};

string tablica::czytaj_dane() {

}

string tablica::zapisz_dane() {

}

string tablica::wczytaj_dane() {
    cout<< wczytaj_dane();
}

tablica::tablica(string jeden,string zero) {
    this ->jeden = jeden;
    this ->zero = zero;
}



int main() {
    tablica jedynki("1","0");
    jedynki.wczytaj_dane();
    return 0;
}
