// https://www.codingninjas.com/studio/problems/selection-sort_981162
// place smallest element in its right place
// TC - O(n^2)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    // printing the array
    for (int el : arr)
    {
        cout << el << " ";
    }
}

int main()
{
    int n, input;
    cin >> n;
    vector<int> arr;
    while (cin >> input)
    {
        arr.push_back(input);
    }
    selectionSort(arr, n);
}