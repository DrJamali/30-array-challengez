#include <iostream>
using namespace std;
int main()
{
    int m1, n1;
    cout << "Enter the number of rows of mat:";
    cin >> m1;
    cout << "Enter the number of coloumns of mat1 :";
    cin >> n1;

    int arr[m1][n1];
    cout << "Enter the first matrices elements" << endl;
    for (int i = 0; i < m1; i++)
    {
        cout << "Enter the " << i + 1 << " row :";
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    cout << "Transpose matrices will be: " << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}