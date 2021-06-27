#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str)) {
        istringstream delim(str);
        string num;
        int sum = 0;
        int cnt = 0;
        while (getline(delim, num, ' ')) {
            sum += stoi(num);
            cnt++;
        }
        float avg;
        avg = (float)sum/(float)cnt;
        printf("Size: %d\nAverage: %.3f\n", cnt, avg);
    }
    return 0;
}