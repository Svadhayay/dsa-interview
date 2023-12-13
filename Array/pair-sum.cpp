// https://www.codingninjas.com/studio/problems/pair-sum_697295

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> res;
    unordered_set<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        int temp = s - arr[i];
        // check if the difference from sum exists in the set
        if (st.count(temp))
        {
            vector<int> pair; // to  make pair and add it in ascending manner.
            pair.push_back(min(arr[i], temp));
            pair.push_back(max(arr[i], temp));
            res.push_back(pair);
        }
        st.insert(arr[i]);
    }
    // sort the res array
    sort(res.begin(), res.end());
    return res;
}

int main()
{
    int s, input;
    cin >> s;
    vector<int> arr;
    vector<vector<int>> res;
    while (cin >> input)
    {
        arr.push_back(input);
    }
    res = pairSum(arr, s);

    for (auto it : res)
    {
        for (int el : it)
        {
            cout << el << " ";
        }
        cout << endl;
    }
}

// vector<vector<int>> pairSum(vector<int> &arr, int s)
// {
//     vector<vector<int>> res;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[i] + arr[j] == s)
//             {
//                 vector<int> pair; // to  make pair and add it in ascending manner.
//                 pair.push_back(min(arr[i], arr[j]));
//                 pair.push_back(max(arr[i], arr[j]));
//                 res.push_back(pair);
//             }
//         }
//     }
//     // sort the res array
//     sort(res.begin(), res.end());
//     return res;
// }
