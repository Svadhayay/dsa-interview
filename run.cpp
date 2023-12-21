#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", row, col);
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", arr[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // if element is odd then print else continue loop
            if (arr[i][j] % 2 != 0)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }
}