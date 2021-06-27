#include <iostream>
#include <memory.h>
using namespace std;

int main()
{
    int dice[4];
    int num[7];
    memset(num, 0, sizeof(num));
    int same = 0;
    for (int i = 0; i < 4; i++)  {
        cin >> dice[i];
        num[dice[i]]++;
        if (num[dice[i]] == 2)
            same = 2;
        else if (num[dice[i]] == 3)
            same = 3;
        else if (num[dice[i]] == 4) {
            cout << "WIN" << endl;
            return 0;
        }
    }
    if (same == 0 || same == 3)
        cout << "R" << endl;
    else {
        int ans = 0;
        if (same == 2) {
            for (int i = 1; i < 7; i++) {
                if (num[i] == 1)
                    ans += i;
            }
            if (ans == 0)
            for (int i = 6; i > 0; i--) {
                if (num[i] == 2) {
                    ans += i*2;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}