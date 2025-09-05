#include <iostream>
#include <vector>

using namespace std;

int main() {

    /*int a,b;
    cout << "Podaj a:" <<endl;
    cin >> a;
    cout << "Podaj b:" <<endl;
    cin >> b;

    while (a!=b){
        if (a>b){
            a=a-b;
        } else{
            b=b-a;
        }

    }

    cout << a;*/

    int tab[] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> tab2 = {5,3,2,5,4};

    cout << tab2[0];

    tab2.push_back(6);

    int x = 10;

    //find(tab2.begin(), tab2.end(),x);

    for (int i = 0; i < tab2.size(); i++) {
        if (tab2[i] == x)
            cout << "Index " << i;
        break;
    }

    return 0;
}
