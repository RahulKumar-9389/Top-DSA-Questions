#include <iostream>
using namespace std;

int partion(int arr[], int low, int high)
{

    int pivot = arr[low];

    int i = low;
    int j = high;

    while (i < j)
    {

        while (arr[i] < pivot && i <= high - 1)
        {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }

        swap(arr[i], arr[j]);
    }

    swap(pivot, arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high)
{

    if (low < high)
    {

        int pIndex = partion(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

int main()
{

    int arr[5] = {8, 4, 2, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    // print the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}