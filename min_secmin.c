#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr1[size];
    int secondmin = 0;
    int min = 9999999;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < size; i++)
    {

        if (arr1[i] < min)
        {
            secondmin = min;
            min = arr1[i];
        }

        else if (arr1[i] < secondmin)
        {
            secondmin = arr1[i];
        }
    }
    printf("Minimum value will be %d\n", min);
    printf("Second Minimum value will be %d\n", secondmin);
    return 0;
}