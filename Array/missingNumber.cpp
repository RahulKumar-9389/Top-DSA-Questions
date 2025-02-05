#include <iostream>
using namespace std;

int findMissing(int arr[], int n){

    int sum = (n * (n+1))/2;

    int s = 0;

    for(int i = 0; i<n-1; i++){
        s += arr[i];
    }

    return sum - s;
}

int main(){

    int arr[6] = {1, 2, 4, 5, 6, 7};
    
    cout<<endl;
    cout<<"Missing number is: "<<findMissing(arr, 6)<<endl;
    return 0;
}