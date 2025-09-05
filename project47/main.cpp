#include <iostream>

using namespace std;

template <typename T>
T max1(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
T min1(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    int intA = 10, intB = 20;
    double doubleA = 10.5, doubleB = 20.5;

    cout << "Maximum z " << intA << " i " << intB << " to " << max1<int>(intA, intB) << endl;
    cout << "Minimum z " << doubleA << " i " << doubleB << " to " << min1<double>(doubleA, doubleB) << endl;

    return 0;
}
