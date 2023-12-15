// https://leetcode.com/problems/find-pivot-index/description/
#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int leftSum = 0, rightSum = 0;
    for (int num : nums)
    {
        rightSum += num;
    }
    // leftSum = rightSum - pivot index
    // so we add to left sum and decrease from rightSum until leftSum equals rightSum.
    for (int i = 0; i < nums.size(); i++)
    {
        rightSum -= nums[i];
        if (leftSum == rightSum)
        {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}

int main()
{
    int input;
    vector<int> nums;
    while (cin >> input)
    {
        nums.push_back(input);
    }
    cout << pivotIndex(nums);
}