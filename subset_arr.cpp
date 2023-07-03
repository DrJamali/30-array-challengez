#include <iostream>
using namespace std;
int main()
{
    int size1, size2, flag;
    cout << "Enter the size1: ";
    cin >> size1;
    int arr1[size1];

    cout << "Enter the first array \n";
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the size2: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter the second array \n";
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < size2; i++)
    {
        flag = 0;
        for (int j = 0; j < size1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << "This array is not a subset\n";
            return 0;
        }
    }
    cout << "This array is a subset of second array\n";

    return 0;
}