#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(1005);
bool vis[1005];
int lavel[1005];

void bfs(int S)
{
    queue<int> q;
    q.push(S);
    vis[S] = true;
    lavel[S] = 0;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int c : adjList[cur])
        {
            if (!vis[c])
            {
                q.push(c);
                vis[c] = true;
                lavel[c] = lavel[cur] + 1;
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

    int q;
    cin >> q;
    while (q--)
    {
        memset(vis, false, sizeof(vis));
        memset(lavel, -1, sizeof(lavel));

        int S, D;
        cin >> S >> D;

        bfs(S);

        cout << lavel[D] << endl;
    }

    return 0;
}