// https://www.codingninjas.com/studio/problems/duplicate-in-array_893397

#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int ans = 0;

    // XOR all the elements of the array which includes the duplicate element.
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    // since array elements are from 1 to n-1, if we XOR 1 to n-1 then we are left with the duplicate element.
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    int input;
    vector<int> arr;
    while (cin >> input)
    {
        arr.push_back(input);
    }
    cout << findDuplicate(arr);
}