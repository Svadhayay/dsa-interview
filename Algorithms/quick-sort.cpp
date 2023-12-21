// quick sort
// O(nlogn)
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low], i = low, j = high;

    while (i < j)
    {

        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
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
    quickSort(arr, 0, n - 1);
    for (int el : arr)
    {
        cout << el << " ";
    }
}