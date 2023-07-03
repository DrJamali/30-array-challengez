#include <iostream>
using namespace std;
int main()
{
    int size;
    int count = 0;
    int num;
    int flag = 0;
    cout << "Enter size: ";
    cin >> size;
    cout << "Enter the array elements: \n";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number: ";
    cin >> num;
    for (int i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            count++;
            flag = 1;
        }
    }
    if (flag == 1)
    {

        cout << num << " is present " << count << " times" << endl;}
        if (flag == 0)
        {
            cout << "this element is not present \n";
        }

        return 0;
    }