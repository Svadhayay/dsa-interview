// https://www.codingninjas.com/studio/problems/sort-0-1_624379

#include <iostream>
#include <algorithm>
using namespace std;

void sortZeroesAndOne(int input[], int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        while (input[i] == 0 && i < j)
        {
            i++;
        }
        while (input[j] == 1 && i < j)
        {
            j--;
        }
        if (i < j)
        {
            swap(input[i], input[j]);
            i++;
            j--;
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
    sortZeroesAndOne(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}