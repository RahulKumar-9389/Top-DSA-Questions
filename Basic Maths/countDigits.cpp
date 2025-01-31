#include <iostream>
#include <math.h>
using namespace std;

// method 1
// int countDigit(int n)
// {

//     int count = 0;

//     while (n > 0)
//     {

//         count = count + 1;
//         n = n / 10;
//     }

//     return count;
// }

// method 2
int countDigit(int n)
{

    int count = (int)log10(n) + 1;
    return count;
}

int main()
{
    int n = 39890;
    cout << countDigit(n) << endl;
    return 0;
}