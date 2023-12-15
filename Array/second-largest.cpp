// https://www.codingninjas.com/studio/problems/second-largest-element-in-the-array_873375

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    int secondLargest = INT_MIN, largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    if (secondLargest != INT_MIN)
    {
        return secondLargest;
    }
    return -1;
}

int main()
{
    int n, input;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr.push_back(input);
    }
    cout << findSecondLargest(n, arr);
}

// int findSecondLargest(int n, vector<int> &arr)
// {
//     sort(arr.begin(), arr.end());
//     for (int i = n - 1; i > 0; i--)
//     {
//         if (arr[i] != arr[i - 1])
//         {
//             return arr[i - 1];
//         }
//     }
//     return -1;
// }
