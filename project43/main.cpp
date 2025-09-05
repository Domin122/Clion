#include <iostream>
using namespace std;

class data{
public:
    int dd,mm,rr;
};

class Samochod{
public:
    string marka,model;
    data data_s{15, 4, 2002};
    Samochod(string,string,data);
    Samochod(string,string);
    void show();
};

Samochod::Samochod(string marka, string model, data d) {
marka = marka;
model = model;
data_s = {d.dd,d.mm,d.rr};
}

Samochod::Samochod(string a, string b) {
marka = a;
model = b;
}

void Samochod::show() {
 cout << "---------------------------" << endl;
 cout <<"Marka: "<<Samochod::marka<<endl<<"Model: "<<Samochod::model <<endl<<"Data: "<< data_s.dd<<" "<< data_s.mm<<" "<< data_s.rr<<endl;
}


int main() {
    Samochod d("ad","ac");
    Samochod c("ad","ac");
    d.show();
    c.show();
    return 0;
}
