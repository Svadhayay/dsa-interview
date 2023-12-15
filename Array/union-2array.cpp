// https://www.codingninjas.com/studio/problems/sorted-array_6613259
// 2pointer
#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int n = a.size(), m = b.size(), i = 0, j = 0;
    vector<int> unionArr;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while (i < n)
    {
        if (unionArr.size() == 0 || unionArr.back() != a[i])
        {
            unionArr.push_back(a[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (unionArr.size() == 0 || unionArr.back() != b[j])
        {
            unionArr.push_back(b[j]);
        }
        j++;
    }
    return unionArr;
}

int main()
{
    int n, m, input;
    cin >> n >> m;
    vector<int> a, b, res;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        a.push_back(input);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> input;
        b.push_back(input);
    }
    res = sortedArray(a, b);
    for (int el : res)
    {
        cout << el << " ";
    }
}