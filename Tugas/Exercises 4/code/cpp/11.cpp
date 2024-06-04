#include <bits/stdc++.h>
using namespace std;

bool is_anagram(string w1, string w2)
{
    if (w1.length() != w2.length())
    {
        return false;
    }

    for (int i = 0; i < w1.length(); i++)
    {
        bool found = false;
        for (int j = 0; j < w2.length(); j++)
        {
            if (w1[i] == w2[j])
            {
                w2.erase(j, 1);
                found = true;
                break;
            }
        }
        if (!found)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string w1, w2;
    cin >> w1 >> w2;
    cout << (is_anagram(w1, w2) ? "Yes" : "No");
}