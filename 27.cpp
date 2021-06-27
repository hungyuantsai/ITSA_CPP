#include <iostream>

using namespace std;

int main()
{
    char ans[4];
    for (int i = 0; i < 4; i++)
        cin >> ans[i];
    char input[4];

    while (cin >> input[0] >> input[1] >> input[2] >> input[3]) {
        if (input[0] == '0' && input[1] == '0' && input[2] == '0' && input[3] == '0')
            break;
        int a = 0, b = 0;
        for (int i = 0; i < 4; i++) {
            if (input[i] == ans[i])
                a++;
            else {
                for (int j = 0; j < 4; j++) {
                    if (i == j)
                        continue;
                    if (input[i] == ans[j])
                        b++;
                }
            }
        }
        cout << a << "A" << b << "B" << endl;
    }
    return 0;
}