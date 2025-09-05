#include <iostream>
using namespace std;

class Czlowiek{
public:
    int wzrost;
    int waga;
    double rozmiar_buta;
    Czlowiek(int,int);
    Czlowiek(double,int,int);
    Czlowiek(){
        cout << "Wykonano konstruktor domyślny";
    };
    Czlowiek(Czlowiek&);
    explicit Czlowiek(Czlowiek*);
};

Czlowiek::Czlowiek(int wzrost, int waga) {
    this -> wzrost = wzrost;
    this -> waga = waga;
    cout << "Wykonano konstruktor Czlowiek(int,int)"<< endl;
}

Czlowiek::Czlowiek(double but, int wz, int wg): Czlowiek(wz,wg) {
    this -> rozmiar_buta = but;
    cout << "Wykonano konstruktor z delegatem" << endl;
}

Czlowiek::Czlowiek(Czlowiek &p){
    wzrost = p.wzrost;
    waga = p.waga;
    rozmiar_buta = p.rozmiar_buta;
    cout << "Wykonano konstruktor kopjujący z referencją" << endl;
}

Czlowiek::Czlowiek(Czlowiek *p) {
    wzrost = p -> wzrost;
    waga = p -> waga;
    rozmiar_buta = p -> rozmiar_buta;
    cout << "Wykonano konstruktor kopjujący z wskaźnikiem" << endl;
}

int main() {
    Czlowiek Dominik(46,176,110);
    Czlowiek Domin(Dominik);


    return 0;
}
