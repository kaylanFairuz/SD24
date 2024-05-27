#include <bits/stdc++.h>
using namespace std;

struct graph
{
    long vertexCount, edgeCount, daysTaken;
    vector<vector<long>> adjList;

    void init(long v)
    {
        vertexCount = v;
        daysTaken = 0;
        edgeCount = 0;
        for (int i = 0; i < vertexCount; i++)
        {
            adjList.push_back({});
        }
    }

    void add_edge(long vertex1, long vertex2)
    {
        adjList[vertex1 - 1].push_back(vertex2 - 1);
        adjList[vertex2 - 1].push_back(vertex1 - 1);
        edgeCount++;
    }

    long bfs(long start)
    {
        vector<bool> visited(vertexCount, false);
        queue<long> q;

        q.push(start);
        visited[start] = true;

        while (!q.empty())
        {
            long temp = q.front();
            q.pop();
            long daysExpected = adjList[temp].size() + 1;

            for (auto vertex : adjList[temp])
            {
                if (!visited[vertex])
                {
                    q.push(vertex);
                    visited[vertex] = true;
                    daysTaken++;
                }
                else
                {
                    daysExpected--;
                }
            }

            daysTaken += ceil(log2(daysExpected));
        }

        return daysTaken;
    }
};

int main()
{
    graph g;
    int N;
    cin >> N;
    g.init(N);
    for (int i = 0; i < N - 1; i++)
    {
        int A, B;
        cin >> A >> B;
        g.add_edge(A, B);
    }

    long days = g.bfs(0);

    cout << days << endl;

    return 0;
}
