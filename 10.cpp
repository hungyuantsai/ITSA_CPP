#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    while (cin >> num1 >> num2) {
        if (num2 > num1)
            swap(num1, num2);
        while (num1 % num2 != 0) {
            int temp = num1;
            num1 = num2;
            num2 = temp%num2;
        }
        cout << num2 << endl;
    }
    return 0;
}