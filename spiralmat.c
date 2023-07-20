#include <stdio.h>
int main()
{
    int rows = 4;
    int col = 4;
    int arr[rows][col];
    for (int i = 0; i < rows; i++)
    {
        printf("Enter the %d th row elements :", i + 1);
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    int row_start = 0;
    int row_end = col - 1;
    int col_start = 0;
    int col_end = rows - 1;
    while (row_start <= row_end || col_start <= col_end)
    {
        for (int i = row_start; i <= row_end; i++)
        {
            printf("%d\t", arr[row_start][i]);
        }
        row_start++;
        for (int i = row_start; i <= col_end; i++)
        {
            printf("%d\t", arr[i][row_end]);
        }
        row_end--;
        for (int i = row_end; i >= col_start; i--)
        {
            printf("%d\t", arr[col_end][i]);
        }
        col_end--;
        for (int i = col_end; i >= col_start+1; i--)
        {
            printf("%d\t", arr[i][col_start]);
        }
        col_start++;
    }

    return 0;
}