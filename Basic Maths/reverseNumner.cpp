#include <iostream>
using namespace std;

int reverseNum(int n)
{

    int ans = 0;

    while (n > 0)
    {
        int last_digit = n % 10;
        ans = ans * 10 + last_digit;
        n = n / 10;
    }
    return ans;
}

int main()
{

    int n = 34517;
    cout << "Reversed number is: " << reverseNum(n) << endl;
    return 0;
}