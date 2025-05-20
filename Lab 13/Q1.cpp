#include <iostream>
using namespace std;

const int SIZE = 3;

class Matrix
{
private:
    int mat[SIZE][SIZE];

public:
    Matrix()
    {
        for (int i = 0; i < SIZE; ++i)
            for (int j = 0; j < SIZE; ++j)
                mat[i][j] = 0;
    }

    void input()
    {
        cout << "Enter matrix elements (" << SIZE << "x" << SIZE << "):\n";
        for (int i = 0; i < SIZE; ++i)
            for (int j = 0; j < SIZE; ++j)
                cin >> mat[i][j];
    }

    void display() const
    {
        for (int i = 0; i < SIZE; ++i)
        {
            for (int j = 0; j < SIZE; ++j)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    Matrix operator*(const Matrix &other)
    {
        Matrix result;
        for (int i = 0; i < SIZE; ++i)
        {
            for (int j = 0; j < SIZE; ++j)
            {
                for (int k = 0; k < SIZE; ++k)
                {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }
};

int main()
{
    Matrix A, B, C;

    cout << "Matrix A:\n";
    A.input();

    cout << "Matrix B:\n";
    B.input();

    C = A * B;

    cout << "Result of A * B:\n";
    C.display();

    return 0;
}
