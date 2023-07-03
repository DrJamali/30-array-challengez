#include <iostream>
using namespace std;
int main()
{
    int size, sum;
    int count = 1;
    int flag = 0;
    int flag2 = 0;
    cout << "Enter size: ";
    cin >> size;
    cout << "Enter the array elements: \n";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max = INT32_MIN;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // cout<<max<<endl;
    int j;
    for (int i = 1; i != max; i++)
    {
        flag = 0;
        for (j = 0; j < size; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << i;
        }
    }

    return 0;}
