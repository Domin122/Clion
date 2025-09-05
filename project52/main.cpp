#include <iostream>
#include <cstdlib>
#include <ctime>
#include <set>

using namespace std;

int main() {
    set<int> liczby;

    srand(time(0));

    while (liczby.size() < 6) {
        int liczba = rand() % 49 + 1;
        liczby.insert(liczba);
    }

    for (int liczba : liczby) {
        cout << liczba << " ";
    }

    return 0;
}
