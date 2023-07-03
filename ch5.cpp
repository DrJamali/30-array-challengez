#include <iostream>
using namespace std;
int main()
{
    int size1;
    cin >> size1;
    int arr1[size1];
    int size2;

    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    cin >> size2;
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int size3 = size1 + size2;
    int arr3[size3];
    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }

    for (int i = size1, j = 0; j < size2; i++, j++)
    {
        arr3[i] = arr2[j];
    }

    for (int i = 0; i < size3; i++)
    {
        for (int j = i + 1; j < size3; j++)
        {
            if (arr3[i] < arr3[j])
            {
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }
    for (int i = 0; i < size3; i++)
    {
        cout << arr3[i] << "\t";
    }

    return 0;
}