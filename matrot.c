#include <stdio.h>
int main()
{
    int rows = 5;
    int col = 5;
    int arr[rows][col];
    for (int i = 0; i < rows; i++)
    {
        printf("Enter the %d th row elements :", i + 1);
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int row_start = 0;
    int row_end = rows;
    int col_start = 0;
    int col_end = col;

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int newarr[rows][col];
    while (row_start <= row_end || col_start <= col_end)
    {

        for (int i = row_start; i <= row_end; i++)
        {
            for (int j = col_start, k = row_end -1; j < col_end; j++, k--)
            {
                newarr[i][j] = arr[k][i];
            }
        }

        row_start++;
        row_end--;
        col_start++;
        col_end--;
    }
printf("new matrix is: \n");
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("%d ", newarr[i][j]);
        }
        printf("\n");
    }

    return 0;
}