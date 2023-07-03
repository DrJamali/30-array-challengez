#include <iostream>
using namespace std;
int main()
{

    // This program is for sum its element
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
int sum =0;
for (int i = 0; i < size; i++)
{
    sum = sum + arr[i];
}
cout<<sum<<endl;






return 0;}