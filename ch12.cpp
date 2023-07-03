#include <iostream>
#include <iostream>
using namespace std;
int main()
{
    int size1;
    cin >> size1;
    int num;

    int arr1[size1];

    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the position you wanna delete: ");
    scanf("%d", &num);
    int arr2[size1];
    for (int i = 0; i < size1-1; i++)
    {
        if (i<num-1)
        {
            arr2[i]=arr1[i];
        }
        else
        {
            arr2[i] =arr1[i+1];
        }
        
    }
    for (int i = 0; i < size1-1; i++)
    {
        cout<<arr2[i]<<"\t";
    }
    

    return 0;
}