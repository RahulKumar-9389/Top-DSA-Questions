#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>&arr){

    int start = 1; int end = arr.size() - 2;

    while(start <= end){

        int mid = start + (end - start)/2;

        if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid+1]){
            return mid;
        }

        if(arr[mid] < arr[mid-1]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    return -1;
}

int main(){

    vector<int>arr = {0, 6, 8, 9, 7, 5, 2};
    cout<<"Peak index is: "<<peakIndexInMountainArray(arr)<<endl;
    return 0;
}