#include <iostream>
#include <algorithm>
#include <memory.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    int start;
    int finish;
    int time[25];
    memset(time, 0, sizeof(time));
    int _max = 0;
    while (testcase--) {
        cin >> start >> finish;
        for (int i = start;i < finish; i++) {
            time[i]++;
            if (time[i] > _max)
                _max = time[i];
        }
    }
    cout << _max << endl;
    return 0;
}