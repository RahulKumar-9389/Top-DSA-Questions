#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {7, 2, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Bubble Sort
    for (int i = (n - 1); i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // print the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}