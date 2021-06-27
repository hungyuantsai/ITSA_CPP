#include <iostream>

using namespace std;

int main()
{
    string str;
    int num[10];
    int temp = 0;
    for (int i = 0; i < 10; i++) {
        cin >> str;
        if (str == "X")
            num[i] = 10;
        else
            num[i] = stoi(str);
        if (i != 0) {
            num[i] += temp;
            temp = num[i];
            num[i] += num[i-1];
        }
        else
            temp = num[i];
    }
    if (num[9] % 11 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}