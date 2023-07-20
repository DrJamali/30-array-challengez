#include <stdio.h>
int main()
{
    int size = 6;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int newarr[size - 1];
    int index = 4;
    for (int i = 0; i < size ; i++)
    {
        if (i < index)
        {
            newarr[i] = arr[i];
        }
        if (i > index)
        {
            newarr[i - 1] = arr[i];
        }
    }
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", newarr[i]);
    }

    return 0;
}