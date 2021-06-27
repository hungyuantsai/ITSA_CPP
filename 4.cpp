#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int h1,h2,m1,m2;
    int t1, t2;
    int t;
    while (cin >> h1)
    {
        cin >> m1 >> h2 >> m2;
        t1 = h1 * 60 + m1;
        t2 = h2 * 60 + m2;
        t = t2 - t1;
        if (t <= 120) cout << floor(t / 30.) * 30;
        else if (t <=240) cout << 120+floor((t-120) / 30.) * 40;
        else cout<<120 + 160 + floor((t - 240) / 30) * 60;
        cout << endl;
    }
    return 0;
}