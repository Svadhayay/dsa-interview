// https://www.codingninjas.com/studio/problems/remove-duplicates-from-sorted-array_1102307

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
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
    cout << removeDuplicates(arr, n);
}