#include <stdio.h>

int main()
{
    int size;
    printf("Please enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Please enter the elements of the array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        int flag = 0;
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}