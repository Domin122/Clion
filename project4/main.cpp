#include <iostream>

using namespace std;

class poczta {
public:
    poczta(string nadawca, string odbiorca, string temat, string tresc);
    string nadawca;
    string odbiorca;
    string temat;
    string tresc;
};

poczta::poczta(string nadawca, string odbiorca,string temat, string tresc){
    this->nadawca=nadawca;
    this->odbiorca=odbiorca;
    this->temat=temat;
    this->tresc=tresc;
}

int main() {

    return 0;
}
