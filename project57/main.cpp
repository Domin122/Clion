#include <iostream>
using namespace std;

void choinka(int h){
    string zn = "A";
    string sp = string(h,' ');

    cout << "" << sp << "*" << endl;

    for(int i = 0; i <h; ++i){
        sp = sp.substr(0,sp.length() - 1);

        if (i != h/2){
            zn+="AA";
        } else{
            sp += "   ";
            zn = zn.substr(0,zn.length() - 4);
        }
        cout << sp << zn << endl;
    }

    for (int i = 0; i < 2; ++i) {
        if (h % 2 == 0){
            cout << string ( h -1 , ' ') << "   ***" << endl;
        } else{
            cout << string ( h -4 , ' ') << "   ***" << endl;
        }
    }
}

int main() {
    choinka(15);
    return 0;
}
