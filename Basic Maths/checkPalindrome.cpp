#include <iostream>
using namespace std;

bool isPalindrome(int n)
{

    int reversed_num = 0;
    int orignal_num = n;

    while (n > 0)
    {
        int last_digit = n % 10;
        reversed_num = reversed_num * 10 + last_digit;
        n = n / 10;
    }

    if (reversed_num == orignal_num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int n = 1225;

    if (isPalindrome(n))
    {
        cout << "Given number is a palindrome!!" << endl;
    }
    else
    {
        cout << "Given number is not a palindrome!!" << endl;
    }

    return 0;
}