#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    queue<int> q1;
    queue<int> q2;
} Stack_q;

void push(Stack_q &s, int n)
{
    s.q2.push(n);

    while (!s.q1.empty())
    {
        s.q2.push(s.q1.front());
        s.q1.pop();
    }

    swap(s.q1, s.q2);
}

void pop(Stack_q &s)
{
    if (!s.q1.empty())
    {
        s.q1.pop();
    }
}

int top(Stack_q &s)
{
    if (!s.q1.empty())
    {
        return s.q1.front();
    }
    return -1; // Stack is empty
}

bool empty(Stack_q &s)
{
    return s.q1.empty() && s.q2.empty();
}

int main()
{
    Stack_q s;
    vector<int> v{1, 3, 5, 68, 20};

    for (int i = 0; i < v.size(); i++)
    {
        push(s, v[i]);
    }

    while (!empty(s))
    {
        cout << top(s) << endl;
        pop(s);
    }
}