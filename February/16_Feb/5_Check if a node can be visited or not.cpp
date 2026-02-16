#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(1005);
bool vis[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        // cout << cur << " ";

        for(int c : adjList[cur])
        {
            if(!vis[c])
            {
                q.push(c);
                vis[c] = true;
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

    int src, dis;
    cin >> src >> dis;
    bfs(src);

    if(vis[dis]) cout << "YES";
    else cout << "NO";
    
    return 0;
}