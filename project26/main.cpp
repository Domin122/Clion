#include <iostream>

using namespace std;

class Uczen{
public:
    static string s_klasa, s_zawod;
    void show();
};



string Uczen::s_klasa = "3ip";
string Uczen::s_zawod = "Programista";

void Uczen::show() {
    cout << s_klasa << " " << s_zawod;
}

int main() {
   Uczen Dominik;
   Dominik.show();
    return 0;
}
