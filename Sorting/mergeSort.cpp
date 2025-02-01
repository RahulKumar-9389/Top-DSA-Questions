#include <iostream>
using namespace std;

void merge(int s, int e, int m, int arr[])
{
    int left = s;
    int right = m + 1;
    int temp[20];
    int k = s;

    while (left <= m && right <= e)
    {
        if (arr[left] <= arr[right])
        {
            temp[k++] = arr[left++];
        }
        else
        {
            temp[k++] = arr[right++];
        }
    }

    while (left <= m)
    {
        temp[k++] = arr[left++];
    }

    while (right <= e)
    {
        temp[k++] = arr[right++];
    }

    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }
}

void mergeSort(int start, int end, int arr[])
{
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;
    mergeSort(start, mid, arr);
    mergeSort(mid + 1, end, arr);
    merge(start, end, mid, arr);
}

int main()
{
    int arr[] = {5, 8, 3, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(0, n - 1, arr);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
