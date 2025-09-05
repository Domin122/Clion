#include <iostream>
using namespace std;

class pracownik{
protected:
    static const int pensja = 5600;
public:
    static string zaklad_pracy;

};

string pracownik::zaklad_pracy = "BROSE SITECH";


class nauczyciel:public pracownik{

};


int main() {
    cout << nauczyciel::zaklad_pracy << "\n";
    cout << pracownik::zaklad_pracy << "\n";

    pracownik Asia;
    Asia.zaklad_pracy = "KGHM";
    pracownik Dominik;

    cout << "Dominik: " << Dominik.zaklad_pracy << "\n";

    cout << "Asia: " << Asia.zaklad_pracy << "\n";


    return 0;
}
