/*
    21. The Lotto requires people to pick seven numbers from the numbers 1 to 40. Write a program
        to randomly generate and print five sets of seven numbers each (one set per line). No number
        is to be repeated in any of the sets; that is, exactly 35 of the 40 numbers must be used. If a
        number ( p, say) is generated that has been used already, the first unused number after p is
        used. (Assume that 1 follows 40.) For example, if 15 is generated but has been used already,
        16 is tried, but if this has been used, 17 is tried, and so on, until an unused number is found.
*/

#include <bits/stdc++.h>
using namespace std;

#define LOTTERY_POOL_SIZE 40
#define LOTTERY_PULL_AMOUNT 7
#define LOTTERY_PULLS 5

void pull_lottery()
{
    // Keeping track of the pulled numbers
    vector<int> v(LOTTERY_POOL_SIZE, 0);

    for (int i = 0; i < LOTTERY_PULLS; i++)
    {
        cout << "Set #" << i + 1 << ": ";
        for (int i = 0; i < LOTTERY_PULL_AMOUNT; i++)
        {
            int n = rand() % LOTTERY_POOL_SIZE;
            while (v[n] != 0)
            {
                n = (n + 1) % LOTTERY_POOL_SIZE;
            }
            v[n] = 1;
            cout << n + 1 << " ";
        }
        cout << endl;
    }

    return;
}

int main()
{
    srand(time(0));
    pull_lottery();
    return 0;
}