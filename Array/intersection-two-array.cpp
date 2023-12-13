// https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> res;

    // i and j for arr1 and arr2 for 2 pointer approach
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        // if both equal then push to res and increment i and j
        if (arr1[i] == arr2[j])
        {
            res.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) // if smaller then increment i
        {
            i++;
        }
        else // if greater then increment j
        {
            j++;
        }
    }
    return res;
}

int main()
{
    int m, n;
    cin >> n >> m;
    vector<int> arr1, arr2, res;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr1.push_back(input);
    }
    for (int i = 0; i < m; i++)
    {
        int input;
        cin >> input;
        arr2.push_back(input);
    }
    res = findArrayIntersection(arr1, n, arr2, m);

    for (auto it : res)
    {
        cout << it << " ";
    }
    return 0;
}

// TLE

// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//     vector<int> res;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 res.push_back(arr2[j]);
//                 arr2[j] = INT_MIN;
//                 break;
//             }
//         }
//     }

//     return res;
// }