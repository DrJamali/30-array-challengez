#include <iostream>
using namespace std;
int main()
{

    // This program is for reversing
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}