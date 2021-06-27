#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int T, m, k;
        cin >> T >> m >> k;
        int price[k];
        for (int i = 0; i < k; i++)
            cin >> price[i];
        sort(price, price+k);
        int cost = 0;
        for (int i = 0; i < m; i++)
            cost += price[i];
        if (cost <= T)
            cout << cost << endl;
        else
            cout << "Impossible" << endl;
    }
    return 0;
}