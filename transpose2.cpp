#include <iostream>
using namespace std;
int main()
{
    int rows, col; 
    cout << "Enter the number of rows of mat:";   
    cin >> rows; // 1 
    cout << "Enter the number of coloumns of mat1 :";
    cin >> col;  // 2

   int arr[rows][col];  //arr[1][2]
   int mat[col][rows];  //arr[2][1]


   
    cout << "Enter the first matrices elements" << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << "Enter the " << i + 1 << " row :";
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    cout << "Transpose matrix will be: " << endl;
  

    for (int i = 0; i < col; i++)                // i < 3
    {
        for (int j = 0; j < rows; j++)           // j < 2
        { 
            // cout<<j<<" "<<i<<" :";                           arr = [[1,2]], 
                                                               
            // cout<<arr[i][j]<<endl;
            mat[i][j] =arr[j][i];               // mat[0][0] =arr[0][0];    mat = [[1],[]]
                                                 // mat[0][1] =arr[1][0];   mat = [[1],[2]] 
                                                 // mat[0][0] =arr[0][0];

                                                //  mat[1][0] =arr[0][1];    mat = [[1],[]]
                                                 // mat[1][] =arr[1][1];   mat = [[1],[2]] 
                                                 // mat[1][0] =arr[0][];
        }
      
    }

  for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < rows; j++)
        {
           cout<<mat[i][j] << " ";
        }
     printf("\n");
    }


    return 0;
}