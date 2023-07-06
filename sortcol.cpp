#include <iostream>
using namespace std;
int main()
{
    int rows, coloumns;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter coloumns";
    cin >> coloumns;
    int mat[rows][coloumns];
    for (int i = 0; i < rows; i++)
    {
        cout << "Enter the " << i + 1 << " row: ";
        for (int j = 0; j < coloumns; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << "Enterd matrices is" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloumns; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < rows - 1; k++)
        {

            for (int j = 0; j < coloumns; j++)
            {
                if (mat[k][j] < mat[k + 1][j])
                {
                    int temp = mat[k][j];
                    mat[k][j] = mat[k + 1][j];
                    mat[k + 1][j] = temp;
                }
            }
        }
    }
    cout << "mofified matrices is" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloumns; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }
}