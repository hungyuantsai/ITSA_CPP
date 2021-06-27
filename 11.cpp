#include <iostream>
#include <memory.h>

using namespace std;

int main()
{
    int row, column;
    while (cin >> column >> row) {
        int matrix[column][row];
        memset(matrix, 0, sizeof(matrix));
        for (int i = 0; i < column; i++) {
            for (int j = 0; j < row; j++) {
                cin >> matrix[i][j];
            }
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                if (j != 0)
                    cout << " ";
                cout << matrix[j][i];
            }
            cout << endl;
        }
    }
    return 0;
}