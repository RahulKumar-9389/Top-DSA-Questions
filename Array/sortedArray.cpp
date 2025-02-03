#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{

    int peak = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[(i + 1) % n])
        {
            peak++;
        }
    }

    return peak <= 1;
}

int main()
{

    int arr[5] = {3, 4, 5, 1, 2};
    int n = 5;

    if (isSorted(arr, n))
    {
        cout << "Array is sorted!!";
    }
    else
    {
        cout << "Array is not sorted!!";
    }
    return 0;
}