#include <iostream>

using namespace std;

void sortowanie(int arr[], int n) {
    int i, j, min;
    for (i = 0; i < n-1; i++) {
        min = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

void wypisz(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {8,5,1,7,3,2,4,6,10,9};
    int n = 10;
    cout << "Nieposortowana tablica: " << endl;
    wypisz(arr, n);
    sortowanie(arr, n);
    cout << "Posortowana tablica: " << endl;
    wypisz(arr, n);
    return 0;
}
