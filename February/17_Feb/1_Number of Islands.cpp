#include <bits/stdc++.h>
using namespace std;

int n, m;
int grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

int bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    int size = 1;

    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = cur.first + d[i].first;
            int cj = cur.second + d[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                size++;
            }
        }
    }
    return size;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int cnt = 0;
    int mxSize = 0;
    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] == 1)
            {
                cnt++;
                int size = bfs(i, j);
                mxSize = max(mxSize, size);
            }
        }
    }

    cout << cnt << endl;
    cout << mxSize << endl;

    return 0;
}