#include <iostream>
#include <memory.h>
#include <math.h>
using namespace std;

int main()
{
    int dec;
    while (cin >> dec) {
        int bin[8];
        memset(bin, 0, sizeof(bin));
        if (dec < 0) {
            bin[0] = 1;
            dec += 256;
        }
        for (int i = 7; i > 0; i--) {
            bin[i] = dec%2;
            dec /= 2;
        }
        for (int i = 0; i < 8; i++) {
            cout << bin[i];
        }
        cout << endl;
    }
    return 0;
}
