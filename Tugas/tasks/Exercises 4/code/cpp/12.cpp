#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    list<int> childrens;

    for (int i = 1; i <= n; i++)
    {
        childrens.push_back(i);
    }

    auto it = childrens.begin();
    while (childrens.size() > 1)
    {
        for (int j = 1; j < m; j++)
        {
            if (++it == childrens.end())
            {
                it = childrens.begin();
            }
        }

        it = childrens.erase(it);

        if (it == childrens.end())
        {
            it = childrens.begin();
        }
    }

    cout << childrens.front();

    return 0;
}
