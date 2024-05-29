#include <bits/stdc++.h>
using namespace std;

int paths(pair<int, int> &p1, pair<int, int> &p2)
{
    // Checking if the points are possible to traverse
    if ((p1.first < p2.first && p1.second > p2.second) || (p1.first > p2.first && p1.second < p2.second))
    {
        return 0;
    }

    int d_x = abs(p1.first - p2.first), d_y = abs(p1.second - p2.second);

    // Base case
    if ((d_x >= 1 && p1.second == p2.second) || (d_y >= 1 && p1.first == p2.first))
    {
        return 1;
    }
    else
    {
        pair<int, int> center(0, 0), n_p1(d_x - 1, d_y), n_p2(d_x, d_y - 1);
        return paths(center, n_p1) + paths(center, n_p2);
    }
}

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    pair<int, int> p1(x1, y1), p2(x2, y2);
    cout << paths(p1, p2) << endl;
}