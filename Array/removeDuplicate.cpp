#include <iostream>
using namespace std;

void removeDuplicate(int arr[], int n)
{

    int i = 0;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
}

int main()
{

    int arr[10] = {1, 1, 1, 2, 2, 3, 4, 4, 3, 5};
    int n = 10;
    removeDuplicate(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}