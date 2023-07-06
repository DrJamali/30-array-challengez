#include <iostream>
using namespace std;
int main()
{
    int rows, col;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter Coloumns: ";
    cin >> col;
    int mat[rows][col];
    for (int i = 0; i < rows; i++)
    {
        cout << "Enter the " << i + 1 << " row: ";
        for (int j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < col - 1; k++)
            {
                if (mat[j][k] < mat[j][k + 1])
                {
                    int temp = mat[j][k];
                    mat[j][k] = mat[j][k + 1];
                    mat[j][k + 1] = temp;
                }
            }
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}