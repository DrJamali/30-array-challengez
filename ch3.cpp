#include <iostream>
using namespace std;
int main()
{
    int count =0;

    // This program is for finding duplicate
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int idx[100000];
    for (int i = 0; i < 100000; i++)
    {
        idx[i]=-1;
    }
    for (int i = 0; i < size; i++)
    {
        if (idx[arr[i]]!=-1)
        {
            count++;
        }
        else{
            idx[arr[i]]=i;
        }
    }
    

cout<<count;




return 0;}