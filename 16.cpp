#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string sub, str;
    cin >> sub >> str;
    unsigned int pos = 0;
    int cnt = 0;
    while ((pos = str.find(sub, pos)) < str.length()) {
        cnt++;
        pos += 1;
    }
    cout << cnt << endl;
    return 0;
}