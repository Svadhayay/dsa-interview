// https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279

#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
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
    cout << largestElement(arr, n);
}
