#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size][size];
    cout << "Enter the first matrices elements"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " row :";
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int arr2[size][size];
    cout << "Enter the second matrices elements"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " row :";
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    cout << "First matrices is" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    cout << "Second matrices is" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    cout<<"Addition mattrices will"<<endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ",arr[i][j]+ arr2[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}