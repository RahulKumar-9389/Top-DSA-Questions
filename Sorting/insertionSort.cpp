#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {7, 2, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Insertion sort
    for (int i = 0; i < n; i++)
    {

        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }

    // print the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}