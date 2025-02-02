#include <iostream>
using namespace std;

int findLargest(int arr[], int n)
{

    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

int main()
{

    int arr[5] = {3, 0, 1, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest element is the: " << findLargest(arr, n) << endl;
    return 0;
}