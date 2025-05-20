#include <iostream>
using namespace std;

int *findMax(int *arr, int size)
{
    int *maxPtr = arr;
    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > *maxPtr)
        {
            maxPtr = arr + i;
        }
    }
    return maxPtr;
}

int main()
{
    int arr[] = {12, 45, 7, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *maxElement = findMax(arr, size);

    cout << "Maximum element is: " << *maxElement << endl;

    return 0;
}
