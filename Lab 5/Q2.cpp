#include <iostream>
using namespace std;

int main()
{
    const int ROW = 3;
    const int COL = 3;
    int matrix[ROW][COL] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int transpose[COL][ROW];

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose:" << endl;
    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
