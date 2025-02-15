#include <bits/stdc++.h>
using namespace std;

bool isPresent(vector<int>&arr, int target){

    int n = arr.size();

    int left = 0;
    int right = n-1;

    while(left < right){

        int mid = left + (right - left)/2;

        if(arr[mid] == target){
            return true;
        }else if(arr[mid] < target){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }

    return false;
}

int main(){

    vector<int>arr = {2, 4, 8, 12, 20};
    if(isPresent(arr, 10)){
        cout<<"Element is present in the array!!"<<endl;
    }else{
        cout<<"Oops! element is not present in the array!!"<<endl;
    }
    return 0;
}