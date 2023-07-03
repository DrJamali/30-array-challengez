#include <iostream>
using namespace std;
int main()
{
    int count = 0;

    // cout << "before input";


    // This program is for finding unique
    int size;
    cin >> size;
    int arr[size];

    // cout << size;

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // cout << "after input";


    int arraySize = 100;

    // cout << "hi";

    int idx[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        idx[i] = -1;
    }

    // cout << "hello";

    for (int i = 0; i < size; i++)
    {
        if (idx[arr[i]] == -1)
        {

            idx[arr[i]] = i;
        }
        else 
        {
            idx[arr[i]] = -1;
        }
        
        
    }

    // cout << "For idx:\n";
    // for (int i = 0; i < arraySize; i++)
    // {
    //     cout << i<< " element is " << idx[i] << "\n";
    // }



    for (int i = 0; i < arraySize; i++)
    {
        if(idx[i]!=-1){

           cout << i << "\n";
    }
    }

    // cout << count;

    return 0;
}