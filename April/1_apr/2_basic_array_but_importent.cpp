// 🟡 Task 4:
// 👉 Count even numbers

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     int count = 0;
//     for(int i = 0; i < n; i++)
//     {
//         if(arr[i] % 2 == 0) count++;
//     }

//     cout << count << '\n';
//     return 0;
// }

// 🟡 Task 5:
// 👉 Reverse array

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     int i = 0, j = n-1;
//     while(i < j)
//     {
//         int tmp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = tmp;
//         i++;
//         j--;
//     }

// while(i < j)
// {
//     swap(arr[i], arr[j]);
//     i++;
//     j--;
// }

// STL shortcut (pro way 😎)
// reverse(arr, arr + n);

//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

// 🟡 Task 6 (challenge 🔥)
// 👉 Find 2nd largest number
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int mx = INT_MIN;
//     int second_mx = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > mx)
//         {
//             second_mx = mx;
//             mx = arr[i];
//         }
//         else if (arr[i] < mx && arr[i] > second_mx)
//             second_mx = arr[i];
//     }
//     cout << second_mx << '\n';
//     return 0;
// }