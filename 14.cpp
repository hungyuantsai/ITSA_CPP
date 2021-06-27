#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    while (cin >> str) {
        string restr = str;
        reverse(restr.begin(), restr.end());
        if (str == restr)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
