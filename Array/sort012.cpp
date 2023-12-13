// https://www.codingninjas.com/studio/problems/sort-0-1-2_631055

#include <iostream>
#include <algorithm>
using namespace std;

// dutch national flag (DNF) algo
// 0 to low-1 = 0s , low to mid-1 = 1s , mid to high = unsorted , high+1 to n-1 = 2s
void sort012(int *arr, int n)
{
    int low = 0, mid = 0, high = n - 1;

    // three pointer
    // traverse using mid
    while (mid <= high)
    {
        if (arr[mid] == 0) // if element at mid is 0 swap with low and update pointers
        {
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1) // if element at mid is 1 just update mid
        {
            mid++;
        }
        else // if element at mid is 2 swap with high and update high
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort012(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// void sort012(int *arr, int n)
// {
//     int count0 = 0, count1 = 0, count2 = 0;
//     // count 0 , 1 and 2
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             count0++;
//         }
//         else if (arr[i] == 1)
//         {
//             count1++;
//         }
//         else
//         {
//             count2++;
//         }
//     }
//     // reset array using counts
//     for (int i = 0; i < count0; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int i = count0; i < count0 + count1; i++)
//     {
//         arr[i] = 1;
//     }
//     for (int i = count0 + count1; i < n; i++)
//     {
//         arr[i] = 2;
//     }
// }