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
    int flag = 0;
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
        for (int j = 0; j < rows; j++)
        {
            if (i == j)
            {
                if (mat[i][j] != 1)
                {
                    cout << "This matrices is not a identity matrice";
                    return 0;
                }
            }
            else if (mat[i][j] != 0)
            {
                cout << "This matrices is not a identity matrice";
                return 0;
            }
        }
    }

    cout << "This matrices is identity matrices";

    return 0;
}