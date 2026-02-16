#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(1005);
bool visited[1005];
int parent[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for(int c : adjList[cur])
        {
            if(!visited[c])
            {
                q.push(c);
                visited[c] = true;
                parent[c] = cur;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    int src, dis;
    cin >> src >> dis;

    bfs(src);

    // for(int i = 0; i < n; i++)
    //     cout << i << " -> " << parent[i] << endl;

    int node = dis;
    vector<int> path;
    while (node != -1)
    {
        path.push_back(node);
        node = parent[node]; 
    }
    
    reverse(path.begin(), path.end());

    for(int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }
    return 0;
}