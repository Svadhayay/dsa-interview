// https://www.codingninjas.com/studio/problems/rotate-array_1230543
// reverse function TC- O(n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> rotateArray(vector<int> arr, int k)
{
    k = k % arr.size(); // if arr size 5 then 7 rotation = 5+2
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
    return arr;
}

int main()
{
    int input, n, k;
    cin >> n;
    vector<int> arr, res;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr.push_back(input);
    }
    cin >> k;
    res = rotateArray(arr, k);
    for (int el : res)
    {
        cout << el << " ";
    }
    return 0;
}