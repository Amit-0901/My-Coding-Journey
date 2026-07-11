#include<iostream>
using namespace std;

int main()
{
    int m, n;

    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;

    int matrix[m][n];

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] == target)
            {
                cout << "Target Found";
                return 0;
            }
        }
    }

    cout << "Target Not Found";

    return 0;
}