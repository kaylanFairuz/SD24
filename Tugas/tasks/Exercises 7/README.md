### [← Back](../../README.md)
<hr />

# Exercises 7
> Tugas ke-5 mata kuliah Struktur Data 2024<br>
> Reference: _Noel Kalicharan - Advanced Topics in C_<br>
- [**Questions**](#qs)
    - [Q20. Bottle Caps](#q20)
    - [Q21. Lottery](#q21)
    - [Q22. Integral Approximation](#q22)
- [**Solutions**](#ss)
    - [S20. Bottle Caps](#s20)
    - [S21. Lottery](#s21)
    - [Q22. Integral Approximation](#q22)

## Questions <a name="qs"></a>
### Q20. Bottle Caps <a name="q20"></a>
Write a program to simulate the collection of bottle caps to spell apple. In every 100 caps, A and E occur 40 times each, and P and L occur 10 times each. Do 50 simulations and print the average number of caps per simulation.

#### [Example Solution](#s20)

### Q21. Lottery <a name="q21"></a>
The Lotto requires people to pick seven numbers from the numbers 1 to 40. Write a program to randomly generate and print five sets of seven numbers each (one set per line). No number is to be repeated in any of the sets; that is, exactly 35 of the 40 numbers must be used. If a number (p, say) is generated that has been used already, the first unused number after p is used. (Assume that 1 follows 40.) For example, if 15 is generated but has been used already, 16 is tried, but if this has been used, 17 is tried, and so on, until an unused number is found.

#### [Example Solution](#s21)

### Q22. Integral Approximation <a name="q22"></a>
A function f(x) is defined for 0 ≤ x ≤ 1, and such that 0 ≤ f(x) < 1 for all 0 ≤ x < 1. Write a program to estimate the integral of f(x) from 0 to 1. Hint: estimate the area under the curve by generating points (x, y), 0 ≤ x < 1, 0 ≤ y < 1.

#### [Example Solution](#s22)

## Solutions <a name="ss"></a>
### S20. Bottle Caps <a name="s20"></a>
#### [Question](#q20)
The problem we must be aware of is if a bottle caps has ran out (i.e all caps have been taken), it cannot be taken again. One way to handle this is to use a dynamic array to store all types of bottle caps. Make the pulling interval the index of the array (up to 4 in this case). If a certain type has ran out, than remove that cap from the array and resize the random pull interval.

#### Example Implementation in C++
[Full implementation](code/cpp/20.cpp)
```cpp
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
```

### S21. Lottery <a name="s21"></a>
#### [Question](#q21)
We can mark which number has been pulled from the lottery pool using an array, and if that number is marked, then as the instruction said, add the next number that has not been marked.

#### Example Implementation in C++
[Full implementation](code/cpp/21.cpp)
```cpp
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
```

### S22. Integral Approximation <a name="s22"></a>
#### [Question](#q22)
We can estimate the integral using the [**Riemann sum**](https://en.wikipedia.org/wiki/Riemann_sum). Mark the x-values that already have a y-value, then find one that hasn't been marked yet.

#### Example Implementation in C++
[Full implementation](code/cpp/22.cpp)
```cpp
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
```
