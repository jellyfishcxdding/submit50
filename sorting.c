#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int array[] = {6,5,4,7,8,3,2,12,10,76,19};
    int n = sizeof(array) / sizeof(array[0]);
    int i, j, temp;

    // Bubble sort
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                // Swap
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    // Print sorted array
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}