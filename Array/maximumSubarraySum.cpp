#include <bits/stdc++.h>
using namespace std;


int maximumSubarraySum(int arr[], int n){

    int maxi = 0;
    int sum  = 0;

    int start = 0;
    int sIndex = -1;
    int eIndex = -1;

    for(int i = 0; i < n; i++){

        sum += arr[i];

        if(sum == 0){
            start = i;
        }

        if(sum > maxi){

            sIndex = start;
            eIndex = i;
            maxi = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }


    // print the sub array
    for(int i = sIndex; i <= eIndex; i++){
        cout<<arr[i]<<" ";
    }

    return maxi;

}


int main(){

    int arr[6] = {2, 5, -10, 0, 6, 3};
    cout<<"Maximum subarray sum is: "<<maximumSubarraySum(arr, 6);
    return 0;
}