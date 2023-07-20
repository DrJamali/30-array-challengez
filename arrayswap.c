#include <stdio.h>
int main()
{
    int size1 = 5;
    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int size2 = 5;
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int arr3[size1 + size2];
    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = size1, k = 0; k < size2; i++, k++)
    {
        arr3[i] = arr2[k];
    }
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}