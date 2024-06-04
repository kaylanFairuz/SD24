#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s1, s2;
    vector<int> v{7, 2, 5, 6, 4, 1, 3};
    for (int i = 0; i < v.size(); i++)
    {
        s1.push(v[i]);
    }

    while (!s1.empty())
    {
        int tmp = s1.top();
        s1.pop();

        while (!s2.empty() && (s2.top() < tmp))
        {
            s1.push(s2.top());
            s2.pop();
        }

        s2.push(tmp);
    }
    s1 = s2;

    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;
}
