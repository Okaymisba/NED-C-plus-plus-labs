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

    int sum = 0;

    cout << "Matrix:" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << matrix[i][j] << " ";
            sum += matrix[i][j];
        }
        cout << endl;
    }

    cout << "Sum of all elements in the matrix is: " << sum << endl;

    return 0;
}
