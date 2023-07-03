#include <iostream>
using namespace std;
int main()
{
    int freq = 1;
    int size1;
    cin >> size1;
    int arr1[size1];
    int flag = 0;

    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }


    for (int i = 0; i < size1; i++)
    {
        freq=1;
        flag=0;

        for (int j = i - 1; j >= 0; j--)
        {
            if (arr1[i] == arr1[j])
            {
                flag = 1;
            }
        }

        if (flag == 1)
        {
            continue;
        }

        for (int j = i + 1; j < size1; j++)
        {
            
            if (arr1[i] == arr1[j])
            {
                freq++;
            }
            
        }
        cout<<arr1[i]<<" occurs "<<freq<<" times"<<endl;
    }

    return 0;
}