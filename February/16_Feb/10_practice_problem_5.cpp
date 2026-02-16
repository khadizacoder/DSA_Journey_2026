#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adjList(n);

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int node;
    cin >> node;

    // for(int i = 0; i <n; i++)
    // {
    //     cout << i << " -> ";
    //     for(int x : adjList[i])
    //     {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }

    int cnt = 0;
    for(int i = 0; i <n; i++)
    {
        if(i == node)
            for(int x : adjList[i])
                cnt++;
    }

    cout << cnt << endl;

    return 0;
}