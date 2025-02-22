#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>&arr){

    int n     = arr.size();
    int pivot = -1;

    for(int i = n-2; i >= 0; i--){
        if(arr[i] < arr[i+1]){
            pivot = i;
            break;
        }
    };

    if(pivot == -1){
        reverse(arr.begin(), arr.end());
        return;
    }

    for(int i = n-1; i > pivot; i--){
        if(arr[i] > arr[pivot]){
            swap(arr[pivot], arr[i]);
            break;
        }
    }

    reverse(arr.begin()+pivot+1, arr.end());
}


int main(){

    vector<int>arr = {2, 4, 1, 7, 5, 0};
    nextPermutation(arr);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}