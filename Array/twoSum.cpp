#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int arr[], int target, int n){

    if(n < 2){
        return {-1, -1};
    }

    unordered_map<int, int>mpp;

    for(int i = 0; i<n; i++){

        int num = arr[i];
        int remaining = target - num;

        if(mpp.find(remaining) != mpp.end()){
            return {mpp[remaining], i};
        }


        mpp[num] = i;
    }

    return {-1, -1};



}

int main(){

    int arr[5] = {2, 6, 5, 8, 11};
    int target = 14;

    vector<int> ans = solve(arr, target, 5);

    cout<<endl;
    cout<<"Index of those two elements which sum equal to target are: ";
    cout<<ans[0]<<","<<ans[1]<<endl;

    return 0;
}