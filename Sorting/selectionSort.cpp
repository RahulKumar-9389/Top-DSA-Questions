#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {7, 4, 0, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < (n - 1); i++)
    {

        int mini = i;

        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }

        swap(arr[i], arr[mini]);
    }

    // print the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}