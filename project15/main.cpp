#include <iostream>
#include <random>

using namespace std;

bool czypierwsza(int n){
    if(n<2)
        return false;
    for (int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;

    return true;
}

int genpierwsze(){
    srand(time(nullptr));
    int pierwsza = rand()%10000+10000;
    while (!czypierwsza(pierwsza))
        pierwsza++;

        return pierwsza;
}
int NWD(int a,int b){
    while (b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main() {
int p = genpierwsze();
int q = genpierwsze();
    while (p==q)
        p = genpierwsze();
    cout << "p: "<< p <<" q: "<< q <<endl;

int n = p*q;

int k = (p-1)*(q-1), e = rand()% k+2;
    while (NWD(k,e)!=1 && !czypierwsza(e))
        e++;
    cout << "e: " << e << endl;

int d = rand()%k;
    while (e*d %k !=1)
        d++;
    cout << "d: " << d << endl;

   cout << "-------------------------------\n";
   cout << "Klucz publiczny: " << e << " "<< n << endl;
   cout << "Klucz prywatny: " << d << " "<< n << endl;
   cout << "-------------------------------\n";

    return 0;
}

