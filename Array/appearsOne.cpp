#include <iostream>
using namespace std;

int solve(int arr[], int n){

    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

int main(){

    int n = 5;
    int arr[5] = {4, 1, 2, 1, 2};

    cout<<endl;
    cout<<solve(arr, n)<<" is appears single time in the array!!"<<endl;
    
    return 0;
}