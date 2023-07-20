#include <stdio.h>
int main()
{
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int trans,trans1,trans2,trans3, i, j;
    printf("Original matrix:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Transpose of matrix:\n");
    for (i = 0; i <=0; i++)
    {
        for (j = 0; j <=0; j++)
        {
            trans = arr[i][j];
            arr[i][j] = arr[i][4-1];
            arr[i][4-1] = trans;
        }
    }
    for(i=3;i<4;i++)
    {
     for(j=0;j<=0;j++)
     {
            trans1=arr[i][j];
            arr[i][j]=arr[i][4-j-1];
            arr[i][4-j-1]=trans1;
        }
    }
    for(int i=1;i<=2;i++)
    {
        for(int j=i+1;j<=2;j++)
        {
            trans2=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=trans2;
        }
    }
    for(int i=1;i<=1;i++)
    {
        for(int j=1;j<=2;j++)
        {
            trans3=arr[i][j];
            arr[i][j]=arr[i+1][j];
            arr[i+1][j]=trans3;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}