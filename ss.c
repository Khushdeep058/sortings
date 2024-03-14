#include <stdio.h>
int main() 
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int l = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<l-1;i++)
    {
        int small=i;
        for(int j=i+1;j<l;j++)
        {
            if(arr[small]  >  arr[j])
            {
                small=j;
            }
        }
        int temp=arr[small];
        arr[small]=arr[i];
        arr[i]=temp;
    }
    printf("sorted array: ");
    for (int i = 0; i < l; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
