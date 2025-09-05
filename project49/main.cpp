#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sortowaniePrzezZliczanie(vector<int>& tablica) {
    int maksElement = *max_element(tablica.begin(), tablica.end());
    vector<int> zliczanie(maksElement + 1, 0);

    for (int i : tablica) {
        zliczanie[i]++;
    }

    int index = 0;
    for (int i = 0; i <= maksElement; i++) {
        while (zliczanie[i] > 0) {
            tablica[index++] = i;
            zliczanie[i]--;
        }
    }
}

int main() {
    vector<int> doPosortowania = {4, 2, 2, 8, 3, 3, 1};

    cout << "Przed sortowaniem: ";
    for (int i : doPosortowania) {
        cout << i << " ";
    }
    cout << endl;

    sortowaniePrzezZliczanie(doPosortowania);

    cout << "Po sortowaniu: ";
    for (int i : doPosortowania) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
