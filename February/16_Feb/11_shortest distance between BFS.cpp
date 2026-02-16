#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(1005);
bool vis[1005];
int dist[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    dist[src] = 0;

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

    int src, d;
    cin >> src >> d;
    bfs(src);

    cout << dist[d] << endl;

    return 0;
}