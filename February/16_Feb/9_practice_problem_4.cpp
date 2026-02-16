#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(1005);
bool vis[1005];
int level[1005];

void bfs(int src, int l)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    vector<int> v;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        if(level[cur] == l)
            v.push_back(cur);

        for(int c : adjList[cur])
        {
            if(!vis[c])
            {
                q.push(c);
                vis[c] = true;
                level[c] = level[cur] + 1;
            }
        }
    }

    reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
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
    memset(level, -1, sizeof(level));
    
    int l;
    cin >> l;
    bfs(0, l);
    
    return 0;
}