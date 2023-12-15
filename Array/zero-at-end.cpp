// https://www.codingninjas.com/studio/problems/ninja-and-the-zero-s_6581958
// 2 pointer
#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeros(int n, vector<int> a)
{
    int j = -1;
    // find first 0th element and put its index in j;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        return a;
    }
    // if non zero is encountered swap with jth index and move j forward
    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

int main()
{
    int n, input;
    cin >> n;
    vector<int> a, res;
    while (cin >> input)
    {
        a.push_back(input);
    }
    res = moveZeros(n, a);
    for (int el : res)
    {
        cout << el << " ";
    }
    return 0;
}