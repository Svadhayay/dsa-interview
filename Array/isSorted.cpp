// https://www.codingninjas.com/studio/problems/ninja-and-the-sorted-check_6581957

#include <bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return 0;
        }
    }
    return 1;
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
    cout << isSorted(n, arr);
}