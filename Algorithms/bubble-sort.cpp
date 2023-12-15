// https://www.codingninjas.com/studio/problems/bubble-sort_980524
// swap adjacent element if it is smaller , round1 will end up with largest element at last
// TC - O(n^2)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
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
    bubbleSort(arr, n);
}