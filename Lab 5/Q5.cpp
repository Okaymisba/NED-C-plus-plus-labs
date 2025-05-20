#include <iostream>
using namespace std;

int main()
{
    const int ROW = 3;
    const int COL = 3;
    int matrix[ROW][COL] = {
        {1, 5, 3},
        {7, 2, 8},
        {4, 9, 6}};

    int maxInRow[ROW];

    for (int i = 0; i < ROW; i++)
    {
        int maxVal = matrix[i][0];
        for (int j = 1; j < COL; j++)
        {
            if (matrix[i][j] > maxVal)
            {
                maxVal = matrix[i][j];
            }
        }
        maxInRow[i] = maxVal;
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Largest elements in each row:" << endl;
    for (int i = 0; i < ROW; i++)
    {
        cout << "Row " << i << ": " << maxInRow[i] << endl;
    }

    return 0;
}
