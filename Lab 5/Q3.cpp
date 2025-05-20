#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 3;
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}};

    bool isSymmetric = true;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    if (isSymmetric)
    {
        cout << "The matrix is symmetric." << endl;
    }
    else
    {
        cout << "The matrix is not symmetric." << endl;
    }

    return 0;
}
