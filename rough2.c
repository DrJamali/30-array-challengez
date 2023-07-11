#include<stdio.h>
int main(){

int size;
scanf("%d", &size);
int roll_no[size];
for (int i = 0; i < size; i++)
{
    scanf("%d", &roll_no[i]);
}



printf("Even numbers are :");
for (int i = 0; i < size; i++)
{
    if (roll_no[i] %2 == 0)
    {
        printf("%d  ", roll_no[i]);
    }
    
}
printf("odd numbers are :");
for (int i = 0; i < size; i++)
{
    if (roll_no[i] %2 != 0)
    {
        printf("%d  ", roll_no[i]);
    }
    
}

    return 0;
}