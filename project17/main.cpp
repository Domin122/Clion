#include <iostream>

class Kalkulator{
public:
    int a,b;
    Kalkulator(int ,int);
    int dodawanie(){
        return a+b;
    }
    int odejmowanie(){
        return a-b;
    }
    int mnozenie(){
        return a*b;
    }
    int dzielenie(){
        return a/b;
    }
};

Kalkulator::Kalkulator(int a, int b) {
  this -> a = a;
  this -> b = b;
}


using namespace std;

int main() {
    cout << Kalkulator(6,2).dodawanie();
    //cout << Kalkulator(6,2).odejmowanie();
    //cout << Kalkulator(6,2).mnozenie();
    //cout << Kalkulator(6,2).dzielenie();

    return 0;
}
