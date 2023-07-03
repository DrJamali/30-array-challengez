#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; i++)
        {
            if (arr[i] != arr[j])
            {
                printf("%d", arr[i]);
            }
        }
    }
