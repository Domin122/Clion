#include<iostream>
using namespace std;

void sito(bool *tab, int n)
{
    for (int i=2; i*i<=n; i++){
        if(!tab[i])
            for (int j = i*i ; j<=n; j+=i)
                tab[j] = true;
    }
}

int main()
{
    int n;
    bool *tab;

    cout<<"Podaj zakres górny przedziału: ";
    cin>>n;

    tab = new bool [n+1];

    for(int i=2; i<=n; i++)
        tab[i] = false;

    sito(tab, n);

    cout<<"Liczby pierwsze z przedziału 2-"<<n<<" : ";

    for(int i=2;i<=n;i++)
        if(!tab[i])
            cout<<i<<" ";

    delete []tab;

    return 0;
}