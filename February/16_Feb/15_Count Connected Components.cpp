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

        for(int child : adjList[cur])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
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
    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        if(vis[i] == false)
        {
            bfs(i);
            cnt++;
        }
    }

    cout << "Total Connected Components = " << cnt;
    
    return 0;
}