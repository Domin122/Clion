#include <iostream>
#include <vector>

using namespace std;

class Sorter {
private:
    vector<int> numbers;

    int findMaxIndex(int start) {
        int maxIndex = start;
        for (size_t i = start + 1; i < numbers.size(); ++i) {
            if (numbers[i] > numbers[maxIndex]) {
                maxIndex = i;
            }
        }
        return maxIndex;
    }

public:
    Sorter() : numbers(10) {}


    void readNumbers() {
        cout << "Podaj 10 liczb calkowitych do posortowania:" << std::endl;
        for (int& num : numbers) {
            std::cin >> num;
        }
    }

    void sortDescending() {
        for (size_t i = 0; i < numbers.size() - 1; ++i) {
            int maxIndex = findMaxIndex(i);
            if (maxIndex != static_cast<int>(i)) {
                swap(numbers[i], numbers[maxIndex]);
            }
        }
    }


    void displayNumbers() const {
        cout << "Posortowana tablica (malejaco):" << std::endl;
        for (const int& num : numbers) {
            cout << num << " ";
        }
        cout << std::endl;
    }
};

int main() {
    Sorter sorter;
    sorter.readNumbers();
    sorter.sortDescending();
    sorter.displayNumbers();
    return 0;
}