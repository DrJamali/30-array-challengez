#include <iostream>
using namespace std;
int main()
{
    int size, rotator;

    cout << "Enter size: ";
    cin >> size;
    cout << "Enter the array elements: \n";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter rotation point: ";
    cin >> rotator;
    for (int i = rotator; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < rotator; i++)
    {
        cout << arr[i] << " ";
    }
cout<<endl;
    return 0;
}