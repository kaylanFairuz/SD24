#include <bits/stdc++.h>
using namespace std;

struct graph{
    long vertexCount, edgeCount;
    vector<vector<pair<long, long>>> adjList;
    
    void init(long v){
        vertexCount = v;
        edgeCount = 0;

        for(int i=0; i<vertexCount; i++){
            adjList.push_back({});
        }
    }

    void add_edge(long vertex1, long vertex2, long weight){
        adjList[vertex1].push_back(make_pair(vertex2, weight));
        adjList[vertex2].push_back(make_pair(vertex1, weight)); // if graph is directed, erase line
        edgeCount++;
    }

    void dijkstra(vector<long> &result, long start){
        vector<bool> visited(vertexCount, false);
        priority_queue <pair<long, long>, 
                        vector <pair<long, long>>, 
                        greater <pair<long, long>> > pq;
        result = vector<long>(vertexCount, LONG_MAX);
        
        pq.push(make_pair(0, start));
        result[start] = 0;

        while(!pq.empty()){
            auto temp = pq.top();
            pq.pop();

            visited[temp.second] = true;

            for(auto vertex:adjList[temp.second]){
                long nextVertex = vertex.first;
                long weight = vertex.second;

                if(!visited[nextVertex]){
                    if(temp.first + weight < result[nextVertex]) {
                        result[nextVertex] = temp.first + weight;
                        pq.push(make_pair(result[nextVertex], nextVertex));
                    }
                }
            }
        }
    }
};

int main(){
    graph g;
    g.init(5);
    g.add_edge(0, 1, 2);
    g.add_edge(0, 5, 4);
    g.add_edge(1, 3, 9);
    g.add_edge(5, 3, 2);
    g.add_edge(3, 4, 1);
    g.add_edge(3, 2, 5);

    vector<long> dijkstra_result;

    g.dijkstra(dijkstra_result, 0);

    for(int i=0; i<dijkstra_result.size(); i++){
        cout << i << " " << dijkstra_result[i] << endl;
    }

    return 0;
}
