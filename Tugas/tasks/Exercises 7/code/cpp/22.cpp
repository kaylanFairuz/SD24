/*
    22. A function f(x) is defined for 0 <= x <= 1, and such that 0 <= f(x) < 1 for all 0 <= x < 1. Write a
        program to estimate the integral of f(x) from 0 to 1.

        Hint: estimate the area under the curve by generating points (x, y), 0 <= x < 1, 0 <= y < 1.
*/

#include <bits/stdc++.h>
using namespace std;

// Partitions of equal sizes
#define N 1000

void estimate_integral()
{
    float area = 0.0;
    vector<int> x_points(N, 0);
    for (int i = 0; i < N; i++)
    {
        int x = rand() % N, y = rand() % N;

        // Avoiding an x-value having multiple y-values
        while (x_points[x] != 0)
        {
            x = (x + 1) % N;
        }
        x_points[x] = y;

        // Area = height of partitions * length of partitions
        float height = (float)y / (float)N;
        float length = 1.0 / (float)N;
        area += height * length;
    }
    cout << "The integral of f(x) from x = 0 to x = 1 is approximately " << area << endl;
}

int main()
{
    srand(time(0));
    estimate_integral();
    return 0;
}
