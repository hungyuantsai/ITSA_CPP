#include <iostream>
using namespace std;

int main()
{
    long double r;
    long int n, p;
    cin >> r >> n >> p;

    long double sum = 0;

    while (n--) {
        sum += p;
        sum *= (1.0+r);
    }
    cout << (long int)sum << endl;


    return 0;
}