#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    double sum_cost = 0, cost = 0;
    if (num > 700) {
        double temp = num - 700;
        num = 700;
        sum_cost += 5.63 * temp;
        cost += 4.50 * temp;
    }
    if (num > 500) {
        double temp = num - 500;
        num = 500;
        sum_cost += 4.97 * temp;
        cost += 4.01 * temp;
    }
    if (num > 330) {
        double temp = num - 330;
        num = 330;
        sum_cost += 4.39 * temp;
        cost += 3.61 * temp;
    }
    if (num > 120) {
        double temp = num - 120;
        num = 120;
        sum_cost += 3.02 * temp;
        cost += 2.68 * temp;
    }
    sum_cost += 2.10 * num;
    cost += 2.10 * num;


    printf("Summer months:%.2f\nNon-Summer months:%.2f\n", sum_cost, cost);

    return 0;
}