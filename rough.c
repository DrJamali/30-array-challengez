#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
printf("Debug1");
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
printf("Debug2");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
               int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Debug3");
    printf("assending order is ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("Debug4");
    return 0;
}