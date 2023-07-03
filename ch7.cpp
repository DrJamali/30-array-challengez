#include <iostream>
using namespace std;
int main()
{
    int size1;
    cin >> size1;
    int arr1[size1];

    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
int min =INT32_MAX;
int max =INT32_MIN;
for (int i = 0; i < size1; i++)
{
    if (arr1[i]<min)
    {
        min=arr1[i];
    }
    if (arr1[i]>max)
    {
        max=arr1[i];
    }
}
cout<<min<<endl;
cout<<max<<endl;


    return 0;
}