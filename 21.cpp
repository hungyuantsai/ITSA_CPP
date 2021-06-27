#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float input, _max = 0.0, _min = 0.0;

    for (int i = 0; i < 10; i++) {
        cin >> input;
        if (i == 0) {
            _max = input;
            _min = input;
        }
        if (_max < input)
            _max = input;
        if (_min > input)
            _min = input;
    }
    printf("maximum:%.2f\nminimum:%.2f\n", _max, _min);

    return 0;
}