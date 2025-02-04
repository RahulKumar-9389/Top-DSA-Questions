#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1, 0, 0, 1, 1};
    int n = 5;

    // code for moves zero
    int j = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    if(j == -1){
        cout<<"There is no zero present in the array!!";
    }

    for(int i = j+1; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }

    // code for print the array
    cout<<endl;
    cout<<"After moving zeros the array is: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

    return 0;
}