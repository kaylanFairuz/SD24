/*
    20. Write a program to simulate the collection of bottle caps to spell apple. In every 100 caps, A
        and E occur 40 times each, and P and L occur 10 times each. Do 50 simulations and print the
        average number of caps per simulation.
*/

#include <bits/stdc++.h>
using namespace std;

// Struct for storing the caps
typedef struct
{
    char letter;
    int amount;
} Caps;

// Function to initialize the caps
Caps create_Caps(char cap_letter, int cap_amount)
{
    Caps cap;
    cap.letter = cap_letter;
    cap.amount = cap_amount;
    return cap;
}

// Simulate in the terminal
void simulate(int n)
{
    int sim_total_caps = 0;

    for (int i = 0; i < n; i++)
    {
        vector<Caps> caps = {create_Caps('A', 40),
                             create_Caps('P', 10),
                             create_Caps('L', 10),
                             create_Caps('E', 40)};
        vector<int> cap_X(26, 0);
        int m = caps.size(), total_caps = 0;

        while (m > 0)
        {
            if (cap_X[0] >= 1 && cap_X[15] >= 2 && cap_X[11] >= 1 && cap_X[4] >= 1)
            {
                sim_total_caps += total_caps;
                /*
                    To keep track of each simulations use this

                    cout << "#" << i + 1 << "\t Caps: " << total_caps;
                    cout << "\t A = " << cap_X[0];
                    cout << "\t P = " << cap_X[15];
                    cout << "\t L = " << cap_X[11];
                    cout << "\t E = " << cap_X[4] << endl;
                */
                break;
            }

            int pull = rand() % m;
            if (caps[pull].amount-- == 0)
            {
                caps.erase(caps.begin() + pull);
                m = caps.size();
            }
            total_caps++;
            int index = caps[pull].letter - 65;
            cap_X[index]++;
        }
    }
    cout << "Simulations: " << n << endl
         << "Total caps: " << sim_total_caps << endl
         << "Average total caps: " << fixed << setprecision(2) << (float)sim_total_caps / (float)n << endl;
}

int main()
{
    srand(time(0));
    simulate(50);
    return 0;
}