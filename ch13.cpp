#include <iostream>
using namespace std;
int main()
{
    int size1;
    cin >> size1;
    int arr1[size1];
    int secondmax = 0;

    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int max = INT32_MIN;

    for (int i = 0; i < size1; i++)
    {

        if (arr1[i] > max)
        {
            secondmax = max;
            max = arr1[i];
        }

        else if (arr1[i] > secondmax)
        {
            secondmax = arr1[i];
        }
    }
    cout << secondmax << endl;
    return 0;
}