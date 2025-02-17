#include <bits/stdc++.h>
using namespace std;

int singleElement(vector<int>&arr){

    int n = arr.size();

    int start = 0, end = n-1;

    while(start <= end){

        int mid = start + (end - start)/2;

        if(mid == 0){
            return 0;
        }
        if(mid == n-1){
            return n-1;
        }

        if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid+1]){
            return mid;
        }

        if(mid % 2 != 0){ 
            if(arr[mid] == arr[mid - 1]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }else{
            if(arr[mid] == arr[mid -1]){
                end = mid - 1;
            }else{
                start = mid+1;
            }
        }
    }

    return -1;
}

int main(){

    vector<int>arr = {2, 2, 3, 3, 4, 4, 5};
    cout<<singleElement(arr);
    return 0;
}