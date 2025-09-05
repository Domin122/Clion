#include <iostream>
#include <vector>
#include <string>

using namespace std;

void lider(const vector<int>& t) {
    int lid = t[0];
    int pom = 1;
    int n = t.size() - 1;
    for (int i = 0; i < n; ++i) {
        if (pom == 0) {
            lid = t[i];
            pom = 1;
        }
        if (t[i] == lid) {
            pom += 1;
        } else {
            pom -= 1;
        }
    }
    if (pom == 0) {
        cout <<  "Nie ma lidera";
    }
    int licznik = 0;
    for (int i = 0; i < n; ++i) {
        if (lid == t[i]) {
            licznik += 1;
        }
    }
    if (licznik > (n / 2)) {
        cout << "Mamy lidera " + to_string(lid);
    }

}

int main() {
    vector<int> t = {1, 2, 3, 3, 3};
    cout << lider(t) << endl;

    return 0;
}
