// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

// 🟢 Task 2:
// 👉 Array এর sum বের করো

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     int sum = 0;
//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         sum+=arr[i];
//     }

//     cout << sum << "\n";

//     return 0;
// }

// 🟢 Task 3:
// 👉 Maximum number বের করো

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
    
//     int mx = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         mx = max(mx, arr[i]);
//     }
 
//     cout << mx << "\n";

//     return 0;
// }


// 🔥 1. Sum using vector
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for(int i = 0; i < n; i++)
//         cin >> v[i];
    
//     int sum = 0;
//     for(int x : v)
//         sum+=x;

//     cout << sum << "\n";
//     return 0;
// }


// 🔥 2. Max without STL max()
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for(int i = 0; i < n; i++)
//         cin >> v[i];

//     int mx=v[0];
//     for(int i = 1; i < n; i++)
//     {
//         if(v[i] > mx) mx = v[i];
//     }

//     cout << mx << '\n';

//     return 0;
// }


// 🔥 3. Built-in STL way (pro level)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    // int mx = *max_element(arr, arr + n); // array ar jonno ai vabe 
    int mx = *max_element(arr.begin(), arr.end()); // vector ar jonno ai vabe

    auto it = max_element(arr.begin(), arr.end());
    int index = it - arr.begin();

    cout << mx << '\n';
    cout << index << '\n';

    return 0;
}

// 🎯 Summary
// max_element → iterator দেয়
// *it → value
// it - begin() → index