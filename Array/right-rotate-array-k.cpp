// https://leetcode.com/problems/rotate-array/
// reverse function TC- O(n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    k = k % nums.size();
    reverse(nums.begin(), nums.end() - k);
    reverse(nums.end() - k, nums.end());
    reverse(nums.begin(), nums.end());
}

int main()
{
    int input, n, k;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr.push_back(input);
    }
    cin >> k;
    rotate(arr, k);
    for (int el : arr)
    {
        cout << el << " ";
    }
    return 0;
}