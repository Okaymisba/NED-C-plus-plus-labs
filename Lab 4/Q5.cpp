#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(const char *str)
{
    const char *start = str;
    const char *end = str + strlen(str) - 1;

    while (start < end)
    {
        if (*start != *end)
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    const char *test1 = "radar";
    const char *test2 = "hello";

    cout << test1 << " is palindrome? " << (isPalindrome(test1) ? "Yes" : "No") << endl;
    cout << test2 << " is palindrome? " << (isPalindrome(test2) ? "Yes" : "No") << endl;

    return 0;
}
