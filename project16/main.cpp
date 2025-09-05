#include <iostream>

using namespace std;

class Osoba{
    int wiek;
public:
    void setWiek(int);
    int getWiek();
    bool czyPelnoletni();
    Osoba(int wiek);
};

void Osoba::setWiek(int wiek){
    this -> wiek = wiek;
}

int Osoba::getWiek() {
    return wiek;
}

bool Osoba::czyPelnoletni() {
    if (wiek>=18)
        return true;
    else
        return false;
}

Osoba::Osoba(int wiek){
    this -> wiek = wiek;
}
int main() {

    Osoba Dominik(17);
    if (Dominik.czyPelnoletni())
        cout << "Witaj stary byku";
    else
        cout << "Nie sprzedam ci piwa"

    return 0;
}

