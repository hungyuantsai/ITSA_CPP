#include <iostream>
#include <memory.h>
#include <math.h>
using namespace std;

int main()
{
    bool prime[10005];
    memset(prime, false, sizeof(prime));

    for (int i = 2; i < 10000; i++) {
        if (prime[i] == true)
            continue;
        bool isprime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isprime = false;
                break;
            }
        }
        if (isprime == true) {
            prime[i] = true;
            for (int j = 2; j*i < 10000; j++) {
                prime[j*i] = false;
            }
        }
    }
    int num;
    while (cin >> num) {
        if (prime[num] == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}