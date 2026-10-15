#include <stdio.h>

int main()
{
    int top = 0;
    int bottom = 2;
    int left = 0;
    int right = 2;

    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    for (int i = left; i <= right; i++)
    {
        printf("%d ", arr[top][i]);
    }
    top++;
    for (int i = top; i <= bottom; i++)
    {
        printf("%d ", arr[i][right]);
    }
    right--;
    for (int i = right; i >= left; i--)
    {
        printf("%d ", arr[bottom][i]);
    }
    bottom--;
    if (left <= right)
    {
        for (int i = bottom; i >= top; i--)
        {
            printf("%d ", arr[i][left]);
        }
        left++;
    }
    if (top <= bottom && left <= right)
{
    printf("%d ", arr[top][left]);
}
    return 0;
}
