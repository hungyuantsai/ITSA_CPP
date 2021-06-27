#include <iostream>
#include <memory.h>
using namespace std;

int main()
{
    int table[3][3];
    memset(table, -1, sizeof(table));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> table[i][j];
        }
    }
    bool win = false;
    for (int i = 0; i < 3; i++) {
        if ((table[i][0] == table[i][1] && table[i][1] == table[i][2])) {
            win = true;
            break;
        }
        if ((table[0][i] == table[1][i] && table[1][i] == table[2][i])) {
            win = true;
            break;
        }
        if ((table[0][0] == table[1][1] && table[1][1] == table[2][2])) {
            win = true;
            break;
        }
        if ((table[2][0] == table[1][1] && table[1][1] == table[0][2])) {
            win = true;
            break;
        }
    }
    if (win == false)
        cout << "False";
    else
        cout << "True";
    cout << endl;
    return 0;
}