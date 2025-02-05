#include <iostream>
using namespace std;

int solve(int arr[], int k, int n){

    int left = 0;
    int right = 0;

    int sum = arr[0];
    int maxLen = 0;

    while(right < n){

        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }

        if(sum == k){
            maxLen = max(maxLen, right-left+1);
        }

        right++;
        if(right < n){
            sum = sum + arr[right];
        }
    }

    return maxLen;
}

int main(){

    int arr[5] = {2, 3, 5, 1, 9};
    int k = 10;

    cout<<endl;
    cout<<"Length of the longest subarray with given sum is: "<<solve(arr, k, 5)<<endl;
    return 0;
}