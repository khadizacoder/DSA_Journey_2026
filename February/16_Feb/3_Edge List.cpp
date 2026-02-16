#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> adgList;

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adgList.push_back({a, b});
    }

    for(pair<int,int> x : adgList)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}