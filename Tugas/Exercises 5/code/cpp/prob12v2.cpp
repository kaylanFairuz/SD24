#include <bits/stdc++.h>
using namespace std;

bool compareSecond(pair<string, int> &p1, pair<string, int> &p2)
{
    return p1.second < p2.second;
}

void push(queue<pair<string, int>> &pq, string &job_name, int &priority)
{
    queue<pair<string, int>> temp_queue;
    pair<string, int> p = make_pair(job_name, priority);
    bool added = false;

    while (!pq.empty())
    {
        if (compareSecond(pq.front(), p) && !added)
        {
            temp_queue.push(p);
            added = true;
        }
        temp_queue.push(pq.front());
        pq.pop();
    }

    if (!added)
    {
        temp_queue.push(p);
    }

    while (!temp_queue.empty())
    {
        pq.push(temp_queue.front());
        temp_queue.pop();
    }
}

int main()
{
    queue<pair<string, int>> pqueue;
    vector<pair<string, int>> job_list{{"Doctor", 3}, {"Janitor", 2}, {"Marketing Team Leader", 5}, {"CEO", 5}, {"Teacher", 4}};
    int n = job_list.size();
    for (int i = 0; i < n; i++)
    {
        push(pqueue, job_list[i].first, job_list[i].second);
    }

    while (!pqueue.empty())
    {
        cout << pqueue.front().second << " " << pqueue.front().first << endl;
        pqueue.pop();
    }
}