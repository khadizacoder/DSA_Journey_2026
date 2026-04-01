#include <bits/stdc++.h>
using namespace std;

int n, m;
int grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int dist[1005][1005];

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dist[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = cur.first + d[i].first;
            int cj = cur.second + d[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 0)
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dist[ci][cj] = dist[cur.first][cur.second] + 1;
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    memset(vis, false, sizeof(vis));
    memset(dist, -1, sizeof(dist));

    bfs(si, sj);
    cout << dist[di][dj] << endl;

    return 0;
}