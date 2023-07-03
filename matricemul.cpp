#include <iostream>
using namespace std;
int main()
{
    int m1, n1, m2, n2,sum;
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
    cout << "Enter the number of rows of mat2:";
    cin >> m2;
    cout << "Enter the number of coloumns of mat2 :";
    cin >> n2;

    int arr2[m2][n2];
    cout << "Enter the second matrices elements" << endl;
    for (int i = 0; i < m2; i++)
    {
        cout << "Enter the " << i + 1 << " row :";
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    cout << "First matrices is" << endl;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    cout << "Second matrices is" << endl;
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    if (n1 == m2)
    {
int arr3[m1][n2];
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            { sum =0;
              for (int k = 0; k < m1; k++)
              {
                sum= sum + (arr[i][k] * arr2[k][j]);
              }
              arr3[i][j]= sum;
              
            }
            
        }
        cout<<"Multilpy of these matrices result in"<<endl;
for (int i = 0; i < m1; i++)
{
    for (int j = 0; j < n2; j++)
    {
        printf("%d ", arr3[i][j]);
    }
   printf("\n"); 
}

    }


    return 0;
}