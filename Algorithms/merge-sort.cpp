// Divide and Merge = Merge Sort
// O(nlogn)

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low, right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left++]);
    }
    while (right <= high)
    {
        temp.push_back(arr[right++]);
    }

    // putting the elements in from temp to arr
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);      // left side
    mergeSort(arr, mid + 1, high); // right side
    merge(arr, low, mid, high);    // merge left and right sorting
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
    mergeSort(arr, 0, n - 1);
    for (int el : arr)
    {
        cout << el << " ";
    }
}