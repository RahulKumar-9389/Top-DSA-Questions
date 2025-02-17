#include <bits/stdtr1c++.h>
using namespace std;

int findIndex(vector<int>&arr, int target){

    int st = 0;
    int end = arr.size() - 1;

    while(st <= end){

        int mid = st + (end - st) / 2;

        if(arr[mid] == target){
            return mid;
        }

        if(arr[st] <= arr[mid]){

            if(target >= arr[st] && target <= arr[mid]){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }else{
            if(target >= arr[mid] && target <= arr[end]){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main(){

    vector<int>arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 5;

    int ans = findIndex(arr, target);

    if(ans != -1){
        cout<<"Element is present at index: "<<ans<<endl;
    }else{
        cout<<"Element is not present in the array"<<endl;
    }

    
    return 0;
}