#include <iostream>
using namespace std;


int main() {
    /*int i=1, n=0,x=5;
    while(x>i){
        i=i+1;
        if(i == x){
            if(i==n+1){
                cout <<"Nie odnaleziono x";
            }
            else{
                cout<< "Odnaleziono x pod indeksem i";
            }
        }
  }*/

    int wynik = 0,i=1,n=1,x=5;
    if(i<=n){
        if(i==x) {
            wynik = wynik + 1;
            i = i + 1;
        }else {
            while (x>i){
                i=i+1;
            }
        }
    }
    return 0;
}
