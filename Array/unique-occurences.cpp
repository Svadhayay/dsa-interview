// https://leetcode.com/problems/unique-number-of-occurrences/

#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    map<int, int> mp;
    set<int> st;
    // insert all elements frequency in map
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    // only the unique frequencies wil be inserted in set.
    for (auto el : mp)
    {
        st.insert(el.second);
    }
    // if maps size equal to set size then all frequencies are different
    if (mp.size() == st.size())
    {
        return true;
    }
    return false;
}

int main()
{
    int input;
    vector<int> arr;
    while (cin >> input)
    {
        arr.push_back(input);
    }
    if (uniqueOccurrences(arr))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}