#include <iostream>
using namespace std;
int main()
{
    int size, sum;
    cout << "Enter size: ";
    cin >> size;
    cout << "Enter the array elements: \n";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the sum";
    cin >> sum;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << i << " ";
                cout << j << " ";
                return 0;
            }
        }
    }
cout<<"Pair doesnot exist"<<endl;
    return 0;
}