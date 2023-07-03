#include <iostream>
using namespace std;
int main()
{
    int rows;
    int col;
    cout << "Enter the rows: ";
    cin >> rows;
    cout << "Enter the Coloumns: ";
    cin >> col;
    int sum = 0;
    int mat[rows][col];
    for (int i = 0; i < rows; i++)
    {
        cout << "Enter the " << i + 1 << " row elements";
        for (int j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << "Your entered matrices is \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " " << mat[i][j];
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            cout << " " << mat[i][j];
            sum = sum + mat[i][j];
        }
        cout << " " << sum;
        printf("\n");
    }
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + mat[j][i];
        }
        cout << " " << sum;
    }

    return 0;
}