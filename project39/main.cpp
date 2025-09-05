#include <iostream>
using namespace std;

int min(const int tab[],const int n){
    int tabx[n];
    for (int i = 0; i < n; i++)
        tabx[i] = tab[i];

    int minx = tab[0];
    for (int el:tabx)
        if (el < minx)
            minx = el;
    return minx;
}

int max(const int tab[],const int n){
    int tabx[n];
    for (int i = 0; i < n; i++)
        tabx[i] = tab[i];

    int maxx = tab[0];
    for (int el:tabx)
        if (el > maxx)
            maxx = el;
    return maxx;
}

int main() {
    int tab[] = {4,2,5,1,6,7,3,2,8,9,3,5,2};
    const int n = sizeof(tab)/sizeof(tab[0]);
    cout << "Min: "<<min(tab,n) << endl;
    cout << "Max: "<<max(tab,n) << endl;

    return 0;
}
