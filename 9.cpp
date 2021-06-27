#include <iostream>
#include <memory.h>
using namespace std;

int main()
{
    int sum[10005];
    memset(sum, 0, sizeof(sum));
    for (int i = 0; i < 10000; i++) {
        if (i % 3 == 0)
            sum[i] = i;
        sum[i] += sum[i-1];
    }
    int num;
    while (cin >> num) {
        cout << sum[num] << endl;
    }
    return 0;
}