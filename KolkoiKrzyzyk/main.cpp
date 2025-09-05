#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

void drawBoard(const array<int, 9>& board) {
    cout << "---------" << endl;
    for (int i = 0; i < 9; ++i) {
        if (i % 3 == 0 && i != 0) cout << endl;

        char symbol = (board[i] == 10) ? 'X' : (board[i] == 50) ? 'O' : '-';

        cout << " " << symbol << " ";
    }
    cout << "\n---------" << endl;
}

void getComputerMove(array<int, 9>& board) {
    while (true) {
        int computerMove = rand() % 9;
        if (board[computerMove] != 0)
            continue;
        board[computerMove] = 50;
        break;
    }
    drawBoard(board);
}

void getUserMove(array<int, 9>& board) {
    while (true) {
        cout << "\nPodaj nr pola: ";
        int userMove;
        cin >> userMove;
        if (userMove < 0 || userMove > 8) {
            cout << "Zła wartość" << endl;
            continue;
        } else if (board[userMove] != 0) {
            cout << "Pole zajęte" << endl;
            continue;
        } else {
            board[userMove] = 10;
            break;
        }
    }
    drawBoard(board);
}

int checkDiagonal(const array<int, 9>& board) {
    int diagonal1 = board[0] + board[4] + board[8];
    int diagonal2 = board[2] + board[4] + board[6];
    if (diagonal1 == 30 || diagonal1 == 150)
        return diagonal1;
    if (diagonal2 == 30 || diagonal2 == 150)
        return diagonal2;
    return 0;
}

int checkColumns(const array<int, 9>& board) {
    for (int i = 0; i < 3; ++i) {
        int sum = board[0 + i] + board[3 + i] + board[6 + i];
        if (sum == 30 || sum == 150)
            return sum;
    }
    return 0;
}

int checkRows(const array<int, 9>& board) {
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        if (i % 3 == 0 && i != 0)
            sum = 0;
        sum += board[i];
        if (sum == 30 || sum == 150)
            return sum;
    }
    return 0;
}

bool isGameOver(const array<int, 9>& board) {
    if (find(board.begin(), board.end(), 0) == board.end() ||
        checkRows(board) != 0 || checkColumns(board) != 0 || checkDiagonal(board) != 0)
        return true;
    return false;
}

string isWinner(const array<int, 9>& board) {
    if (isGameOver(board)) {
        if (checkRows(board) == 30 || checkColumns(board) == 30 || checkDiagonal(board) == 30)
            return "Wygrał gracz";
        else if (checkRows(board) == 150 || checkColumns(board) == 150 || checkDiagonal(board) == 150)
            return "Wygrał komputer";
        else
            return "Remis";
    }
    return "";
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    string champion;
    array<int, 9> board = {0};
    drawBoard(board);
    getUserMove(board);
    getComputerMove(board);
    checkDiagonal(board);
    checkRows(board);
    checkColumns(board);
    isGameOver(board);
    while (!isGameOver(board)) {
        getUserMove(board);
        if (!isGameOver(board))
            getComputerMove(board);
        champion = isWinner(board);
    }

    cout << "\n**********************\n     " << champion << "\n**********************\n";
    return 0;
}
