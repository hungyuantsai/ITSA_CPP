#include <iostream>

using namespace std;

int f(int);

int main()
{
    int num;
    cin >> num;
    cout << f(num) << endl;
    return 0;
}

int f(int n) {
    if (n == 0|| n == 1) {
        return n+1;
    }
    else {
        return f(n-1) + f(n/2);
    }
}
