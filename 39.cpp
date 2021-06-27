#include <iostream>

using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int lis, read, oral;
        int pass = 0, sum = 0;
        cin >> lis >> read >> oral;
        if (lis < 60)
            pass++;
        else
            sum+=lis;
        if (read < 60)
            pass++;
        else
            sum+=read;
        if (oral < 60)
            pass++;
        else
            sum+=oral;
        if (pass == 0)
            cout << "P" << endl;
        else if (pass == 1) {
            if (lis + read + oral >= 220)
                cout << "P" << endl;
            else
                cout << "M" << endl;
        }
        else if (pass == 2) {
            if (sum >= 80)
                cout << "M" << endl;
            else
                cout << "F" << endl;
        }
        else
            cout << "F" << endl;
    }
    return 0;
}
