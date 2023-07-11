#include <iostream>
using namespace std;
int main()
{
    int rows, col;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter col: ";
    cin >> col;
    int mat[rows][col];
    for (int i = 0; i < rows; i++)
    {
        cout << "Enter the " << i + 1 << " rows" << endl;
        for (int j = 0; j < col; j++)
        {
            int condition = (rows%2==0)? (rows/2):(rows/2+10);
            if ( j == condition)



            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == 0)
            {
                mat[i][j] = mat[2][i];
            }
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<< mat[i][j];
        }
        cout<<endl;
    }


    return 0;
}