#include <iostream>
#include <vector>
using namespace std;

int minV(vector<int> t,int start){
    int min = t[start], index = start;
    for(int i = start+1; i < t.size(); i++)
        if(min > t[i]){
          min = t[i];
          index = i;
        };
    return index;
}

vector<int> sortuj(vector<int> t){
    int min;
    for (int i = 0; i < t.size(); i++) {
        min = minV(t, i);
        int pom = t[min];
        t.erase(t.cbegin() + min);
        t.insert(t.cbegin() + i, pom);
    }
    for (int el:t) {
        cout << el << " ";
    }

    return t;
}

int main() {
    vector<int> tab = {4,3,2,7,6,9,0,8,1,5,2,1};
    sortuj(tab);

    return 0;
}
