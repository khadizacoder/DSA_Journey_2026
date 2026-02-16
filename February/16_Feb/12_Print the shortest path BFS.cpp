#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(1005);
bool vis[1005];
int dist[1005];
int parent[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    dist[src] = 0;
    // parent[src] = -1;

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for(int c : adjList[cur])
        {
            if(!vis[c])
            {
                q.push(c);
                vis[c] = true;
                dist[c] = dist[cur] + 1;
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
    
    memset(vis, false, sizeof(vis));
    memset(dist, -1, sizeof(dist));
    memset(parent, -1, sizeof(parent));

    int src, d;
    cin >> src >> d;
    bfs(src);

    vector<int> path;
    int node = d;
    while(node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }

    reverse(path.begin(), path.end());

    for(int x : path) cout << x << " ";

    return 0;
}