#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j, numSwaps;

    for (i = 0; i < n-1; i++)
    {
        numSwaps = 0;

        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                numSwaps++;
            }
        }

        printf("Pass #%d: %d\n", i+1, numSwaps);
    }
}

int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    bubbleSort(arr, 9);
    return 0;
}
