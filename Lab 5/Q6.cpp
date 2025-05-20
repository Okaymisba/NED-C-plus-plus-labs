#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &vec)
{
    int start = 0;
    int end = vec.size() - 1;
    while (start < end)
    {
        int temp = vec[start];
        vec[start] = vec[end];
        vec[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    cout << "Original vector: ";
    for (int num : vec)
    {
        cout << num << " ";
    }
    cout << endl;

    reverseVector(vec);

    cout << "Reversed vector: ";
    for (int num : vec)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
