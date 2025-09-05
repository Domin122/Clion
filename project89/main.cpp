#include <iostream>
#include <vector>

using namespace std;

bool sprawdzPlansze(int n, int m, const vector<vector<int>>& A) {
    vector<vector<bool>> P(n, vector<bool>(m, false));

    P[0][0] = true;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (A[i][j] == 0) {
                P[i][j] = false;
            } else {
                if (i == 0 && j != 0) {
                    P[i][j] = P[i][j - 1];
                } else if (i != 0 && j == 0) {
                    P[i][j] = P[i - 1][j];
                } else if (i != 0 && j != 0) {
                    P[i][j] = P[i][j - 1] || P[i - 1][j];
                }
            }
        }
    }

    return P[n - 1][m - 1];
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> A(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> A[i][j];

    bool wynik = sprawdzPlansze(n, m, A);

    cout << (wynik ? "PRAWDA" : "FAŁSZ") << endl;

    return 0;
}