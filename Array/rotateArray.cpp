#include <iostream>
using namespace std;

void Reverse(int arr[], int start, int end){
    while(start <= end){
        int temp   = arr[start];
        arr[start] = arr[end];
        arr[end]   = temp;
        start++;
        end--;
    }
}


void rotate(int arr[], int k, int n){

    if(n == 0){
        return;
    }

    k = k % n;

    Reverse(arr, 0, k);
    Reverse(arr, k+1, n-1);
    Reverse(arr, 0, n-1);

}

int main()
{

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int n = 7;

    rotate(arr, 3, 7);

    cout<<endl;
    cout<<"After rotating the array is: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;


    return 0;
}
