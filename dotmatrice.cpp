#include <iostream>
using namespace std;
int main()
{
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, arr2[3][3] = {{9,8,7}, {6,5,4} ,{3,2,1}}, arr3[3][3], sum;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = 0;
            for (int k = 0; k < 3; k++)
            {
                
                sum = sum + arr1[j][k] * arr2[k][i];
            }
            arr3[j][i]= sum;
        }
    }

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout<<arr3[i][j]<<" ";
    }
    cout<<endl;
}
return 0;}