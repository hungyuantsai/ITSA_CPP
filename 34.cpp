#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int sex;
    float height;

    while (cin >> height >> sex) {
        if (sex == 1)
             printf("%.1f\n", (height-80)*0.7);
        else
            printf("%.1f\n", (height-70)*0.6);
    }
    return 0;
}
