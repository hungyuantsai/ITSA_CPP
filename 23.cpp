#include <iostream>

using namespace std;

int main()
{
    int money, total, cost1, cost2, cost3;
    char sign;
    cin >> money >> sign >> cost1 >> sign >> cost2 >> sign >> cost3;
    total = 0;
    total = cost1*15 + cost2*20 + cost3*30;
    if (money < total)
        cout << "0" << endl;
    else {
        int coin1 = 0, coin5 = 0, coin50 = 0;
        int left = money - total;
        coin50 = left/50;
        left %= 50;
        coin5 = left/5;
        left %= 5;
        coin1 = left;
        cout << coin1 << "," << coin5 << "," << coin50 << endl;
    }
    return 0;
}