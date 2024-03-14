#include <iostream>
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
    std::cout << "sorted array: ";
    for (int i = 0; i < l; i++) 
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
