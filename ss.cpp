#include <iostream>
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
    std::cout << "sorted array: ";
    for (int i = 0; i < l; i++) 
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
