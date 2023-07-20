#include <stdio.h>
int main()
{
    int size= 8;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    int highestsum = 0;
    int start = 0;
    int end = 0;
    for (int i = 0; i < size; i++)
    {
        sum = 0;
        for (int j = i + 1; j < size; j++)
        {
            sum = arr[i] + arr[j];
            if (sum > highestsum)
            {
                highestsum = sum;
                start = i;
                end = j;
            }
        }
    }
    printf("The highest sum subarray is: \n");
    for (int i = start; i <= end; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    printf("Its maximum sum is %d\n", highestsum);

    return 0;
}