#include <bits/stdc++.h>
using namespace std;

list<int> int_to_binary(int n);                      // Function 7
int binary_to_int(list<int> &l);                     // Function 8
list<int> binary_sum1(list<int> &b1, list<int> &b2); // Using function on question 7 and 8
list<int> binary_sum2(list<int> &b1, list<int> &b2); // Bit-by-bit addition

int main()
{
    list<int> b1{1, 0, 1, 0, 1, 1}, b2{1, 0, 0, 0, 1};
    list<int> res1 = binary_sum1(b1, b2);

    for (int bit : res1)
    {
        cout << bit;
    }
    cout << endl;

    list<int> res2 = binary_sum2(b1, b2);

    for (int bit : res2)
    {
        cout << bit;
    }
    cout << endl;
}

list<int> int_to_binary(int n)
{
    list<int> l;

    while (n)
    {
        if (n & 1)
        {
            l.push_back(1);
        }
        else
        {
            l.push_back(0);
        }
        n >>= 1;
    }

    if (l.empty())
    {
        l.push_back(0);
    }

    return l;
}

int binary_to_int(list<int> &l)
{
    int n = 0, x = 1;

    for (auto it : l)
    {
        if (it)
        {
            n += x;
        }
        x <<= 1;
    }

    return n;
}

list<int> binary_sum1(list<int> &b1, list<int> &b2)
{
    int n1 = binary_to_int(b1), n2 = binary_to_int(b2);
    int sum = n1 + n2;

    return int_to_binary(sum);
}

list<int> binary_sum2(list<int> &b1, list<int> &b2)
{
    list<int> res;
    int carry = 0;

    auto it1 = b1.begin();
    auto it2 = b2.begin();

    while (it1 != b1.end() || it2 != b2.end() || carry)
    {
        int bit1 = (it1 != b1.end()) ? *it1 : 0;
        int bit2 = (it2 != b2.end()) ? *it2 : 0;

        int sum = 0;
        if (bit1 & bit2)
        {
            sum = carry;
            carry = 1;
        }
        else if (bit1 | bit2)
        {
            sum = 1 - carry;
            carry = carry;
        }
        else
        {
            sum = carry;
            carry = 0;
        }

        res.push_back(sum);

        if (it1 != b1.end())
        {
            ++it1;
        }

        if (it2 != b2.end())
        {
            ++it2;
        }
    }

    return res;
}