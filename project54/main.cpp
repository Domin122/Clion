#include <iostream>
#include <vector>

using namespace std;

class Macierz {
private:
    vector<vector<int>> data;

public:
    Macierz(vector<vector<int>> d) : data(d) {}

    friend Macierz operator+(const Macierz& m1, const Macierz& m2) {
        vector<vector<int>> wynik;

        if (m1.data.size() != m2.data.size() || m1.data[0].size() != m2.data[0].size()) {
            cerr << "Macierze muszą mieć taki sam rozmiar!" << endl;
            exit(1);
        }

        for (size_t i = 0; i < m1.data.size(); ++i) {
            vector<int> row;
            for (size_t j = 0; j < m1.data[0].size(); ++j) {
                row.push_back(m1.data[i][j] + m2.data[i][j]);
            }
            wynik.push_back(row);
        }

        return Macierz(wynik);
    }

    void pokaz() const {
        for (const auto& row : data) {
            for (int element : row) {
                cout << element << " ";
            }
            cout << endl;
        }
    }
};

class Obliczenia {
public:
    static void pokazidodaj(const Macierz& m1, const Macierz& m2) {
        Macierz wynik = m1 + m2;

        cout << "Macierz 1:" << endl;
        m1.pokaz();

        cout << "\nMacierz 2:" << endl;
        m2.pokaz();

        cout << "\nWynik:" << endl;
        wynik.pokaz();
    }
};

int main() {
    vector<vector<int>> data1{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> data2{{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    Macierz macierz1(data1);
    Macierz macierz2(data2);

    Obliczenia::pokazidodaj(macierz1, macierz2);

    return 0;
}
