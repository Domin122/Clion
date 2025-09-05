#include <iostream>
#include <fstream>
using namespace std;

int main() {
ofstream fileW("kotki.cat");

    if (fileW){
        fileW << "aaaa bbb"<< endl;
        fileW << "jareczku  koteczku"<< endl;
        fileW << "Mateuszku brzuszku"<< endl;
    } else
        cout << "Nie da rady"<< endl;


ifstream fileR("kotki.cat");

    //slowo po slowie
    /*string slowo;
    while (!fileR.eof()){
        fileR >> slowo;
        cout << slowo << endl;
    }*/

    //linia po linii
    /*string linia;
    while (getline(fileR,linia)){
        cout << linia << endl;
    }*/

    //Znak po znaku

    /*char znak;
    while (!fileR.eof()){
        znak = fileR.get();
        cout << znak << endl;
    }*/


    return 0;
}
