#include <stdio.h>
int main() 
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int l = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < l - 1; i++) 
    {
        for (int j = 0; j < l - 1 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("sorted array: ");
    for (int i = 0; i < l; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
