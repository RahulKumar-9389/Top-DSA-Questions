#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n)
{

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    return second_largest;
}

int main()
{

    int arr[5] = {9, 3, 2, 7, 0};
    cout << "Second largest element is : " << findSecondLargest(arr, 5) << endl;
    return 0;
}