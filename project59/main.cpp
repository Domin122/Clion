#include<iostream>
using namespace std;

void sortowanie_przez_wybieranie(int tab[],int n)
{
    int mn_index;

    for(int i=0;i<n-1;i++)
    {
        mn_index = i;
        for(int j=i+1;j<n;j++)
            if(tab[j]<tab[mn_index])
                mn_index = j;


        swap(tab[i], tab[mn_index]);
    }
}

int main()
{
    int *tab, n;

    cout<<"Ile liczb chcesz posortować? ";
    cin>>n;

    tab = new int [n];

    for(int i=0;i<n;i++) {
        cout << "Podaj liczbe: ";
        cin >> tab[i];
    }

    cout << "Przed sortowaniem: ";
    for(int i=0;i<n;i++)
        cout<<tab[i]<<" ";

    sortowanie_przez_wybieranie(tab,n);

    cout<<endl;
    cout << "Po sortowaniu: ";
    for(int i=0;i<n;i++)
        cout<<tab[i]<<" ";

    cout<<endl;
    return 0;
}