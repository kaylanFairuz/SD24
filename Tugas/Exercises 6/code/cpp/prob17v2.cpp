#include <bits/stdc++.h>
using namespace std;

void separate_digit(int n, stack<int> &s)
{
    s.push(n % 10);
    n /= 10;
    if (n == 0)
    {
        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
        return;
    }
    else
    {
        separate_digit(n, s);
    }
}

int main()
{
    int n;
    stack<int> s;
    cin >> n;
    separate_digit(n, s);

    return 0;
}