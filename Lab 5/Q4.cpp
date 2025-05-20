#include <iostream>
using namespace std;

int main()
{
    const int ROW1 = 2, COL1 = 3;
    const int ROW2 = 3, COL2 = 2;

    int matrix1[ROW1][COL1] = {
        {1, 2, 3},
        {4, 5, 6}};

    int matrix2[ROW2][COL2] = {
        {7, 8},
        {9, 10},
        {11, 12}};

    int result[ROW1][COL2] = {0};

    for (int i = 0; i < ROW1; i++)
    {
        for (int j = 0; j < COL2; j++)
        {
            for (int k = 0; k < COL1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Result of matrix multiplication:" << endl;
    for (int i = 0; i < ROW1; i++)
    {
        for (int j = 0; j < COL2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
