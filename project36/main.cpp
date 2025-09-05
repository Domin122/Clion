#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void sortuj(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main() {
    srand(time(nullptr));
    const int size = 10;
    int arr[size];


    for (int & i : arr) {
        i = rand() % 20;
    }

    cout << "Przed sortowaniem: " << endl;
    for (int i : arr) {
        cout << i << " ";
    }

    sortuj(arr, size);

    cout << endl << "Po sortowaniu: " << endl;
    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}
