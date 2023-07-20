#include <stdio.h>
int main()
{
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || j == n-1 || i == n-1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j ||j ==0)
            {
                printf("*");
            }
              else{
                printf(" ");
            }
        }
        printf("\n");
    }

return 0;}