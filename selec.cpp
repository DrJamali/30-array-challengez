#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        cout<<"Value of arr[i] is "<<arr[i]<<endl;
        int j = i-1;
     while (j>=0 && arr[j]>arr[i])
     {
         cout<<"Value of arr[i] is "<<arr[i]<<endl;
       arr[j+1] = arr[j];
       j--;
     }
      cout<<"Value of arr[i] is "<<arr[i]<<endl;
     arr[j+1]= arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}