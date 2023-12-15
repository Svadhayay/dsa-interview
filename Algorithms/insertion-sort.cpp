// https://www.codingninjas.com/studio/problems/insertion-sort_3155179

#include <iostream>
#include <vector>
using namespace std;

void insertionSort(int n, vector<int> &arr)
{
    int j, key;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        // find the element before key which is smaller than
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    insertionSort(n, arr);
    for (int el : arr)
    {
        cout << el << " ";
    }
}