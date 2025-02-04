#include <iostream>
using namespace std;

int main(){

    int arr[5] = {2, 4, 7, 9, 11};
    int n = 5; 
    int target = 5;

    // linear search
    int i;
    for(i = 0; i<n; i++){
        if(arr[i] == target){
            cout<<"Element is present in the array at index "<<i<<endl;
            break;
        }
    }

    if(i == n){
        cout<<"There is no such element present in the array!!"<<endl;
    }

    return 0;
}