#include <iostream>
using namespace std;

class Komputer{
public:
    static string marka,model;
};

class PC:public Komputer{
public:
    static string rodzaj_obudowy;
};

class Laptop:public Komputer{
public:
    static string dlug_przek_ekranu, kolor_obudowy;
};

string Komputer::marka = "Samsung";
string Komputer::model = "Windows";

string PC::rodzaj_obudowy = "Slim";

string Laptop::dlug_przek_ekranu = "20cm";
string Laptop::kolor_obudowy = "Czarny";

int main() {
    Komputer l;
    PC p;
    Laptop r;

    cout << "Komputer: " << l.model << " " << l.marka << "\n";
    cout << "PC: " << p.model << " " << p.marka << " " << p.rodzaj_obudowy << "\n";
    cout << "Laptop: "<< r.model << " "<< r.marka << " " << r.dlug_przek_ekranu << " " << r.kolor_obudowy << "\n";
    return 0;
}
