# Joon Becomes President
[Praktikum Modul 2 - Struktur Data B 2021/2022](https://www.hackerrank.com/contests/alpro-its-sd-m2-b-2022/challenges)

With the pandemic that is going on right now, Joon as the president wants to help and distribute supplies to the provinces that are hit by disasters.

With this supply distribution, all the towns in the same province will get the same amount of help, meanwhile towns that are located in a different province will get a different amount of help as well.

With the worsening economy that is happening, Joon needs to calculate the most minimal total cost of help that he can give out to the provinces.

Two towns are assumed to be in the same province if there are 1 or more ways to get to one another.

#### Input Format:
First line contains an integer `T` that is the amount of test cases. For every test case, the first line contains 2 integer `N` and `M` that state the amount of towns (vertex) and ways (edges) in the country. For the next `M` lines contain 2 integer `U` and `V` that means there are ways to connect the town `U` and the town `V`.

#### Output:
For each test case, the output is a line that contains `"Kasus #K: X"` in which `K` is the test case index/number and `X` is the minimal cost that Joon needs to put out to help.

#### Constraints:
1 ≤ T ≤ 5<br>
1 ≤ N ≤ 105<br>
N – 1 ≤ M ≤ min(N*(N – 1)/2, 105)

#### Sample Input 0:
```
2
5 3
1 2
2 3
3 1
7 6
1 2
1 3
1 4
1 5
1 6
1 7
```

#### Sample Output 0:
```
Kasus #1: 8
Kasus #2: 7
```

#### Explanation 0:
<p align="center">
  <img src="https://github.com/kaylanFairuz/SD24/blob/main/Modul%203/assets/sd22-b4-explanation-0.png"/>
</p>

One of the optimal ways for the first test case is:
1. provide assistance in the amount of 1 in cities 1,2 and 3
2. provide assistance in the amount of 2 to the city 4
3. provide assistance in the amount of 3 to the city 5

So the total cost of help that Joon can give out is 8.

