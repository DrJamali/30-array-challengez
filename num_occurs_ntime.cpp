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
    for (int i = 0; i < size-1; i++)
    {
        count =1;
        flag = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            continue;
        }

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << arr[i] << endl;
            flag2 = 1;
        }
    }
    if (flag2 == 0)
    {
        cout << "No majority element is present \n";
    }

    return 0;
}