#include <iostream>
#include <random>
using namespace std;
/*
int main() {
   srand(time(NULL));
   int a;
   int *tab = new int[a];
   cout << "Podaj liczbe rzutów: ";
   cin >> a;
   for(int i =0;i<a;i++)
        tab[i] = rand()%6+1;

   cout <<"Wylosowano: ";
   for(int i =0;i<a;i++)
        cout << tab[i] << " ";

    return 0;
}
*/
int main(){
    srand(time(nullptr));
    double tab[10];
    for(int i =0;i<sizeof(tab)/sizeof(tab[0]);i++)
        tab[i] = rand()%2;
    for(int i =0;i<sizeof(tab)/sizeof(tab[0]);i++)
        cout << tab[i] << " ";

    int min;
    min = tab[0];
    for(int i=1;i<10;i++)
        if(min>tab[i])
            min = tab[i];
    
            cout <<endl;
            cout <<"Najmniejsza liczba to:"<< min;
    return 0;
}