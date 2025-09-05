#include <iostream>

class Najkwieksza{
public:
    int a,b;
    Najkwieksza(int, int);

    int coWieksze(){
        if (a>b)
            return true;
        else
            return false;
    }

};

Najkwieksza::Najkwieksza(int a, int b) {
    this -> a = a;
    this -> b = b;
}

using namespace std;

int main() {
    if(Najkwieksza(6,3).coWieksze())
        cout << "A jest większe";
    else
        cout << "B jest większe";


    return 0;
}
