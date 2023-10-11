#include <iostream>
using namespace std;

char board[3][3] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' } };
char currentPlayer = 'X';

void printBoard() {
    cout << "  1 2 3" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << '|';
        }
        cout << endl;
        if (i < 2) cout << "  -+-+-" << endl;
    }
    cout << endl;
}

bool isMoveValid(int row, int col) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ')
        return true;
    return false;
}

bool checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return true;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return true;
    return false;
}

bool isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

int main() {
    cout << "Welcome to Tic-Tac-Toe!" << endl;
    
    while (true) {
        printBoard();

        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        if (isMoveValid(row - 1, col - 1)) {
            board[row - 1][col - 1] = currentPlayer;

            if (checkWin()) {
                printBoard();
                cout << "Player " << currentPlayer << " wins!" << endl;
                break;
            } else if (isBoardFull()) {
                printBoard();
                cout << "It's a draw!" << endl;
                break;
            }

            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            cout << "Invalid move! Try again." << endl;
        }
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}
