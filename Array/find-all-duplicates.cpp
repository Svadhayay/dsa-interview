// https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cstdlib>
using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> res;
    for (auto num : nums)
    {
        // index is absolute value of element minus 1
        int index = abs(num) - 1;
        // if the element at that index is negative that means we are encountering it twice so add it to result vector
        if (nums[index] < 0)
        {
            res.push_back(index + 1);
        }
        // else we will invert the number
        nums[index] = nums[index] * -1;
    }

    return res;
}
int main()
{
    int input;
    vector<int> nums, res;
    while (cin >> input)
    {
        nums.push_back(input);
    }
    res = findDuplicates(nums);
    for (auto num : res)
    {
        cout << num << " ";
    }
}

// Using hash set

// vector<int> findDuplicates(vector<int> &nums)
// {
//     vector<int> res;
//     set<int> st;
//     for (auto num : nums)
//     {
//         // if element already exist in set add it to the result vector
//         if (st.count(num))
//         {
//             res.push_back(num);
//         }
//         st.insert(num);
//     }
//     return res;
// }