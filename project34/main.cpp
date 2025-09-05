#include <iostream>
using namespace std;

void sortuj(int *arr, int n, bool rosnaco) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (rosnaco) {
                if (arr[j] > arr[j+1]) {
                    swap(arr[j], arr[j+1]);
                }
            } else {
                if (arr[j] < arr[j+1]) {
                    swap(arr[j], arr[j+1]);
                }
            }
        }
    }
}

int main() {
    int n;
    cout << "Ile liczb posortować: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Podaj " << n << " liczb do posortowania: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool rosnaco;
    cout << "Czy chcesz sortować rosnąco? (0 - Nie, 1 - Tak): ";
    cin >> rosnaco;

    sortuj(arr, n, rosnaco);

    cout << "Posortowane liczby to: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}
