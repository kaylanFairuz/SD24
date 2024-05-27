#include <bits/stdc++.h>
using namespace std;

struct graph
{
    long vertexCount, edgeCount;
    vector<vector<long>> adjList;

    void init(long v)
    {
        vertexCount = v;
        edgeCount = 0;
        for (int i = 0; i < vertexCount; i++)
        {
            adjList.push_back({}); // inserts V ammount of empty vector
        }
    }

    void add_edge(long vertex1, long vertex2)
    {
        adjList[vertex1 - 1].push_back(vertex2 - 1);
        adjList[vertex2 - 1].push_back(vertex1 - 1);
        edgeCount++;
    }

    vector<long> dfs()
    {
        vector<bool> visited(vertexCount, false);
        vector<long> provinces;

        for (int i = 0; i < vertexCount; i++)
        {
            if (!visited[i])
            {
                stack<long> st;
                st.push(i);
                visited[i] = true;

                long provincesSize = 0;

                while (!st.empty())
                {
                    long temp = st.top();
                    st.pop();
                    provincesSize++;

                    for (auto vertex : adjList[temp])
                    {
                        if (!visited[vertex])
                        {
                            st.push(vertex);
                            visited[vertex] = true;
                        }
                    }
                }

                provinces.push_back(provincesSize);
            }
        }

        return provinces;
    }
};

int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        graph g;
        int N, M;
        cin >> N >> M;
        g.init(N);
        for (int j = 0; j < M; j++)
        {
            int U, V;
            cin >> U >> V;
            g.add_edge(U, V);
        }

        vector<long> provinces = g.dfs();
        sort(provinces.begin(), provinces.end(), greater<int>()); // Sort in descending order
        long resources = 0;

        for (int j = 1; j <= provinces.size(); j++)
        {
            resources += provinces[j - 1] * j;
        }

        printf("Kasus #%d: %ld\n", i, resources);
    }

    return 0;
}
