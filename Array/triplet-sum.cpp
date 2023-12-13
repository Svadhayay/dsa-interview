#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    vector<vector<int>> res;

    for (int i = 0; i < n - 1; i++)
    {
        sort(arr.begin(), arr.end());
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            int sum = arr[i] + arr[l] + arr[r];
            if (sum == K)
            {
                vector<int> trip;
                trip.push_back(arr[i]);
                trip.push_back(arr[l]);
                trip.push_back(arr[r]);
                res.push_back(trip);
                return res;
            }
            else if (sum > K)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    return res;
}

int main()
{
    int n, k, input;
    cin >> n;
    vector<int> arr;
    vector<vector<int>> res;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr.push_back(input);
    }
    cin >> k;
    res = findTriplets(arr, n, k);

    for (auto it : res)
    {
        for (int el : it)
        {
            cout << el << " ";
        }
        cout << endl;
    }
}

// vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
// {
//     vector<vector<int>> res;

//     for (int i = 0; i < n - 2; i++)
//     {
//         unordered_set<int> s;
//         int cur_sum = K - arr[i]; // current sum

//         for (int j = i + 1; j < n; j++)
//         {
//             int req_sum = cur_sum - arr[j];

//             if (s.count(req_sum))
//             {
//                 vector<int> tri;
//                 tri.push_back(arr[i]);
//                 tri.push_back(arr[j]);
//                 tri.push_back(req_sum);
//                 res.push_back(tri);
//                 return res;
//             }
//             s.insert(arr[j]);
//         }
//     }
//     return res;
// }